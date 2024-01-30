@class UIDebuggingIvarViewController;

@interface _UIDebuggingOverlayDetailIvar : _UIDebuggingOverlayViewControllerDetail {
    UIDebuggingIvarViewController *_vc;
}

- (id)viewController;
- (void).cxx_destruct;
- (void)_createVCIfNecessary;
- (void)_updateForInspectedView:(id)a0;
- (void)_updateForInspectedViewController:(id)a0;

@end
