@protocol PUPhotosPreviewPresentationControllerDelegate;

@interface PUPhotosPreviewTransitionDelegate : _UIPreviewTransitionDelegate

@property (weak, nonatomic) id<PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate;

- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void).cxx_destruct;

@end
