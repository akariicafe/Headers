@class PXViewControllerPinchTransitionSettings, PXViewControllerSwipeDownTransitionSettings, PXViewControllerZoomTransitionSettings;

@interface PXViewControllerTransitionSettings : PXSettings

@property (retain, nonatomic) PXViewControllerZoomTransitionSettings *zoomTransitionSettings;
@property (retain, nonatomic) PXViewControllerPinchTransitionSettings *pinchTransitionSettings;
@property (retain, nonatomic) PXViewControllerSwipeDownTransitionSettings *swipeDownTransitionSettings;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void).cxx_destruct;
- (void)createChildren;

@end
