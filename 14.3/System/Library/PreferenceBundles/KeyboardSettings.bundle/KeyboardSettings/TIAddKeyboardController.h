@interface TIAddKeyboardController : PSListController

+ (BOOL)shouldAddInputMode:(id)a0 toEnabledInputModes:(id)a1;

- (void)updateDoneButton;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonTapped;
- (void)viewDidDisappear:(BOOL)a0;
- (void)doneButtonTapped;
- (void)viewDidLoad;
- (id)newSpecifiers;
- (void)toggleInputMode:(id)a0;
- (void)addCheckedInputModes;

@end
