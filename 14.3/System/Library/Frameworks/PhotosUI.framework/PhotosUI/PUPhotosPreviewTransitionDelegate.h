@protocol PUPhotosPreviewPresentationControllerDelegate;

@interface PUPhotosPreviewTransitionDelegate : _UIPreviewTransitionDelegate

@property (weak, nonatomic) id<PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate;

- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;

@end
