@class UIDebuggingIvarViewController;

@interface _UIDebuggingOverlayDetailIvar : _UIDebuggingOverlayViewControllerDetail {
    UIDebuggingIvarViewController *_vc;
}

- (void)_updateForInspectedView:(id)a0;
- (void)_updateForInspectedViewController:(id)a0;
- (void)_createVCIfNecessary;
- (id)viewController;
- (void).cxx_destruct;

@end
