@class NSString, LPImage, NSURL;

@interface NEArticleLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) LPImage *linkPresentationImage;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *contentURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (double)deviceScreenScaleFromPotentialBackgroundThread;
- (id)initWithHeadline:(id)a0;
- (id)linkPresentationImageFromHeadline:(id)a0;
- (id)titleFromHeadline:(id)a0;
- (id)urlFromHeadline:(id)a0;

@end
