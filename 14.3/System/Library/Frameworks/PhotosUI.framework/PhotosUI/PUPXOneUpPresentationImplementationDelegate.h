@class NSString;

@interface PUPXOneUpPresentationImplementationDelegate : NSObject <PXOneUpPresentationImplementationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)oneUpPresentation:(id)a0 startAnimated:(BOOL)a1 interactiveMode:(long long)a2;
- (void)oneUpPresentation:(id)a0 stopAnimated:(BOOL)a1;
- (void)oneUpPresentation:(id)a0 presentingViewControllerViewDidDisappear:(BOOL)a1;
- (void)oneUpPresentation:(id)a0 presentingViewControllerViewWillAppear:(BOOL)a1;
- (void)oneUpPresentation:(id)a0 didDismissPreviewViewController:(id)a1 committing:(BOOL)a2;
- (BOOL)oneUpPresentationCanStart:(id)a0;
- (BOOL)oneUpPresentationCanStop:(id)a0;
- (void)oneUpPresentationInvalidatePresentingGeometry:(id)a0;
- (void)oneUpPresentation:(id)a0 presentingViewControllerViewDidAppear:(BOOL)a1;
- (void)oneUpPresentation:(id)a0 presentingViewControllerViewWillDisappear:(BOOL)a1;
- (id)previewViewControllerForOneUpPresentation:(id)a0 allowingActions:(BOOL)a1;
- (BOOL)oneUpPresentation:(id)a0 handlePresentingPinchGestureRecognizer:(id)a1;
- (void)oneUpPresentation:(id)a0 commitPreviewViewController:(id)a1;

@end
