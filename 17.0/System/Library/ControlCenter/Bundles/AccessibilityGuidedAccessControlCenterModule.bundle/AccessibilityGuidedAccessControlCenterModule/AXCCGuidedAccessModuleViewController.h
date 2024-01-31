@class NSString;
@protocol AXCCGuidedAccessModuleViewControllerDelegate;

@interface AXCCGuidedAccessModuleViewController : CCUIButtonModuleViewController

@property (copy, nonatomic) NSString *lastFetchedEffectiveApp;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<AXCCGuidedAccessModuleViewControllerDelegate> gaxDelegate;

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)_updateEnabledState;
- (BOOL)_isDeviceUnlocked;
- (id)_accessibilityControlCenterButtonIdentifier;
- (id)_accessibilityControlCenterButtonLabel;
- (BOOL)_guidedAccessAvailable;

@end
