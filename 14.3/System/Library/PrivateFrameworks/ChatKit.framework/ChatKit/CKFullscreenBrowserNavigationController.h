@class NSString;

@interface CKFullscreenBrowserNavigationController : UINavigationController <CKAdaptivePresentedControllerProtocol>

@property (nonatomic) BOOL wantsWindowedPresentation;
@property (nonatomic) BOOL preserveModalPresentationStyle;
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (BOOL)shouldAutorotate;
- (BOOL)constrainToPresentingVCBounds;
- (BOOL)forceWindowedPresentation;
- (unsigned long long)supportedInterfaceOrientations;

@end
