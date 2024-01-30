@class ADASManager;

@interface SHSHeadphoneLightningAdaptersController : PSListController

@property (retain, nonatomic) ADASManager *audioSettingsManager;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setConnectedToHeadphonesEnabled:(id)a0 forSpecifier:(id)a1;
- (id)getConnectedToHeadphonesEnabled;
- (void)confirmForgetLightningAdaptersAction;
- (void)deleteAllLightningAdapterData;

@end
