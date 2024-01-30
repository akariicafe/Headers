@class RMUIPasscodeViewModel;

@interface RMPasscodeViewController : PSListController

@property (retain, nonatomic) RMUIPasscodeViewModel *passcodeModel;

- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_passcodeDetailValue:(id)a0;
- (void)_processUserInfoDictionary;
- (id)_specifiersForPasscodeSettings;

@end
