@protocol PUPhotosPreviewPresentationControllerDelegate;

@interface PUPhotosPreviewPresentationController : _UIPreviewPresentationController

@property (weak, nonatomic) id<PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate;

- (void)_revealTransitionDidComplete:(BOOL)a0;
- (void).cxx_destruct;

@end
