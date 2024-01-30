@class RMUIKeyValueViewModel;

@interface RMKeyValueViewController : PSListController

@property (retain, nonatomic) RMUIKeyValueViewModel *viewModel;

- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_keyValueDetailValue:(id)a0;
- (void)_processUserInfoDictionary;
- (id)_specifiersForKeyValues;

@end
