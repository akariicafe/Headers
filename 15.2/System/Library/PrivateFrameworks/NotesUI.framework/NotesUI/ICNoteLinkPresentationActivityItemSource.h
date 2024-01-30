@class UIImage;
@protocol ICSearchIndexableNote;

@interface ICNoteLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource

@property (retain) id<ICSearchIndexableNote> note;
@property (copy, nonatomic) UIImage *thumbnailImage;

- (id)iconImage;
- (id)detail;
- (id)title;
- (void).cxx_destruct;
- (id)init;
- (id)initWithNote:(id)a0;
- (id)initWithNote:(id)a0 thumbnailImage:(id)a1;

@end
