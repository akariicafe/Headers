@class LAUIPhysicalButtonView, LAUIHorizontalArrowView;

@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController {
    unsigned char _rotationCount;
    BOOL _attemptedSecondaryViewCreation;
    BOOL _cameraOrientationSupported;
    LAUIHorizontalArrowView *_cameraArrowView;
    LAUIPhysicalButtonView *_physicalButtonView;
}

@property (readonly, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic) BOOL showPhysicalButtonIndicator;
@property (nonatomic) BOOL showCameraIndicator;

- (void)_createSecondaryViewsIfNecessary;
- (BOOL)_effectiveShowPhysicalButtonIndicator;
- (BOOL)_effectiveShowCameraIndicator;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;

@end
