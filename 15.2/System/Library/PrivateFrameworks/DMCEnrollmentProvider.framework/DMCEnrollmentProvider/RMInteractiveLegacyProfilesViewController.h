@class RMDeclarationInfo, RMLegacyProfilesSpecifierProvider;

@interface RMInteractiveLegacyProfilesViewController : PSListController

@property (retain, nonatomic) RMDeclarationInfo *declarationInfo;
@property (retain, nonatomic) RMLegacyProfilesSpecifierProvider *legacyProfilesProvider;

- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_processUserInfoDictionary;
- (id)_specifiersForProfile;
- (void)_activateProfile:(id)a0 specifier:(id)a1;
- (id)_isActivatedProfile:(id)a0;
- (void)_presentAlertForError:(id)a0 isActivating:(BOOL)a1;

@end
