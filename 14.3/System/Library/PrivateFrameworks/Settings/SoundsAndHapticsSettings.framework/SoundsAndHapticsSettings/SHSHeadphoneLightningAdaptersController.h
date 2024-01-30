@class ADASManager;

@interface SHSHeadphoneLightningAdaptersController : PSListController

@property (retain, nonatomic) ADASManager *audioSettingsManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setConnectedToHeadphonesEnabled:(id)a0 forSpecifier:(id)a1;
- (id)getConnectedToHeadphonesEnabled;
- (void)confirmForgetLightningAdaptersAction;
- (void)deleteAllLightningAdapterData;

@end
