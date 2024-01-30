@class NSString, PXOneUpPresentation, PXAssetReference, PUOneUpPresentationHelper;

@interface PUPXOneUpPresentationImplementation : NSObject <PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate>

@property (readonly, nonatomic) PUOneUpPresentationHelper *_helper;
@property (readonly, weak, nonatomic) PXOneUpPresentation *_oneUpPresentation;
@property (readonly, nonatomic) PXAssetReference *lastViewedAssetReference;
@property (readonly, nonatomic) BOOL canStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implementationForOneUpPresentation:(id)a0;

- (unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (void)presentingViewControllerViewDidAppear:(BOOL)a0;
- (BOOL)handlePresentingPinchGestureRecognizer:(id)a0;
- (void)commitPreviewViewController:(id)a0;
- (id)oneUpPresentationHelperViewController:(id)a0;
- (void)presentingViewControllerViewWillDisappear:(BOOL)a0;
- (id)oneUpPresentationHelper:(id)a0 regionOfInterestForAssetReference:(id)a1 cropInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (BOOL)oneUpPresentationHelperPreventRevealInMomentAction:(id)a0;
- (BOOL)oneUpPresentationHelperWantsShowInLibraryButton:(id)a0;
- (id)oneUpPresentationHelperSpotlightTextsToHighlight:(id)a0;
- (BOOL)canStartAnimated:(BOOL)a0;
- (void)oneUpPresentationHelper:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void)stopAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)_initWithOneUpPresentation:(id)a0;
- (void)didDismissPreviewViewController:(id)a0 committing:(BOOL)a1;
- (id)init;
- (void)presentingViewControllerViewDidDisappear:(BOOL)a0;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)a0;
- (BOOL)oneUpPresentationHelperShouldAutoPlay:(id)a0;
- (id)previewViewControllerAllowingActions:(BOOL)a0;
- (void)invalidatePresentingGeometry;
- (id)oneUpPresentationHelperViewHostingTilingView:(id)a0;
- (BOOL)startWithConfigurationHandler:(id /* block */)a0;
- (void)presentingViewControllerViewWillAppear:(BOOL)a0;
- (id)oneUpPresentationHelperScrollView:(id)a0;
- (void)oneUpPresentationHelper:(id)a0 shouldHideAssetReferences:(id)a1;
- (id)oneUpPresentationHelper:(id)a0 currentImageForAssetReference:(id)a1;

@end
