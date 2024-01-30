@interface TIAddKeyboardController : PSListController

+ (BOOL)shouldAddInputMode:(id)a0 toEnabledInputModes:(id)a1;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateDoneButton;
- (void)cancelButtonTapped;
- (void)doneButtonTapped;
- (id)newSpecifiers;
- (void)toggleInputMode:(id)a0;
- (void)addCheckedInputModes;

@end
