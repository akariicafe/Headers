@class NSString;
@protocol AXCCGuidedAccessModuleViewControllerDelegate;

@interface AXCCGuidedAccessModuleViewController : CCUIButtonModuleViewController

@property (copy, nonatomic) NSString *lastFetchedEffectiveApp;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<AXCCGuidedAccessModuleViewControllerDelegate> gaxDelegate;

- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_isDeviceUnlocked;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)_updateEnabledState;
- (BOOL)_guidedAccessAvailable;
- (id)_accessibilityControlCenterButtonLabel;
- (id)_accessibilityControlCenterButtonIdentifier;

@end
