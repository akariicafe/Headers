@interface TIAddKeyboardController : PSListController

+ (BOOL)shouldAddInputMode:(id)a0 toEnabledInputModes:(id)a1;

- (void)viewDidLoad;
- (id)specifiers;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateDoneButton;
- (void)cancelButtonTapped;
- (void)doneButtonTapped;
- (void)addCheckedInputModes;
- (id)newSpecifiers;
- (void)toggleInputMode:(id)a0;

@end
