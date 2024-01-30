@class NSString;

@interface AUDeveloperSettingsTextEditingController : PSListController <UITextFieldDelegate> {
    NSString *_identifier;
    BOOL _keyboardShownOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getValue:(id)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (id)init;
- (void)suspend;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)setTrainName:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)setBuildName:(id)a0;
- (void)saveEditedValue:(id)a0 specifier:(id)a1;

@end
