@class RMUIProfileViewModel, RMUIConfigurationInterface;

@interface RMInteractiveLegacyProfilesViewController : PSListController

@property (retain, nonatomic) RMUIProfileViewModel *profileModel;
@property (retain, nonatomic) RMUIConfigurationInterface *rmuiConfigInterface;

- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_activateProfile:(id)a0 specifier:(id)a1;
- (id)_isActivatedProfile:(id)a0;
- (void)_presentAlertForErrorModel:(id)a0;
- (void)_processUserInfoDictionary;
- (id)_specifiersForProfile;

@end
