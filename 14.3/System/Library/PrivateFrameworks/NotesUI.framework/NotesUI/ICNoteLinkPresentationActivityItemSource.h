@class UIImage;
@protocol ICSearchIndexableNote;

@interface ICNoteLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource

@property (retain) id<ICSearchIndexableNote> note;
@property (retain, nonatomic) UIImage *thumbnailImage;

- (id)detail;
- (id)init;
- (void).cxx_destruct;
- (id)iconImage;
- (id)title;
- (id)initWithNote:(id)a0;
- (id)initWithNote:(id)a0 thumbnailImage:(id)a1;

@end
