@class PSSpecifier;

@interface CNFRegDisabledController : CNFRegFirstRunController {
    PSSpecifier *_spinner;
    PSSpecifier *_turnOnButton;
}

- (id)bundle;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_activateSpinner;
- (void)_deactivateSpinner;
- (id)_rightButtonItem;
- (void)_setupAccountHandlersForDisabledOperation;
- (id)getAccountNameForSpecifier:(id)a0;
- (id)specifierList;
- (void)turnOnTapped:(id)a0;

@end
