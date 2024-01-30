@interface MagnifierSupport.ActivityOnboardingNavigationController : OBNavigationController {
    void /* unknown type, empty encoding */ activityCreatedDelegate;
    void /* unknown type, empty encoding */ activityInfoController;
    void /* unknown type, empty encoding */ activityNameController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activityControlsPresetController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activityCustomizeControlsController;
    void /* unknown type, empty encoding */ activityDoneController;
    void /* unknown type, empty encoding */ continueToActivityNameButton;
    void /* unknown type, empty encoding */ continueToControlsPresetsButton;
    void /* unknown type, empty encoding */ continueToControlsCustomizationButton;
    void /* unknown type, empty encoding */ continueToCommitActivityButton;
    void /* unknown type, empty encoding */ commitActivityButton;
    void /* unknown type, empty encoding */ currentActivityName;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;
- (void)_createActivityNamePane;
- (void)_createControlsCustomizationPane;
- (void)_dismissActivityCustomizationPane;
- (void)_createActivityReadyPane;
- (void)_createControlsPresetPane;

@end
