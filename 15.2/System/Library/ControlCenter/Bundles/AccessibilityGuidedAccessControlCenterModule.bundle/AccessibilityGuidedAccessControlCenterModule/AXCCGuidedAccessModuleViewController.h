@class NSString;
@protocol AXCCGuidedAccessModuleViewControllerDelegate;

@interface AXCCGuidedAccessModuleViewController : CCUIButtonModuleViewController

@property (copy, nonatomic) NSString *lastFetchedEffectiveApp;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<AXCCGuidedAccessModuleViewControllerDelegate> gaxDelegate;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_isDeviceUnlocked;
- (BOOL)_canShowWhileLocked;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateEnabledState;
- (BOOL)_guidedAccessAvailable;
- (id)_accessibilityControlCenterButtonLabel;
- (id)_accessibilityControlCenterButtonIdentifier;

@end
