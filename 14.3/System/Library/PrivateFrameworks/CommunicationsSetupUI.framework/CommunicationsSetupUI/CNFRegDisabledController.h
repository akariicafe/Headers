@class PSSpecifier;

@interface CNFRegDisabledController : CNFRegFirstRunController {
    PSSpecifier *_spinner;
    PSSpecifier *_turnOnButton;
}

- (void).cxx_destruct;
- (id)bundle;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)specifierList;
- (id)getAccountNameForSpecifier:(id)a0;
- (void)_setupAccountHandlersForDisabledOperation;
- (id)_rightButtonItem;
- (void)_activateSpinner;
- (void)_deactivateSpinner;
- (void)turnOnTapped:(id)a0;

@end
