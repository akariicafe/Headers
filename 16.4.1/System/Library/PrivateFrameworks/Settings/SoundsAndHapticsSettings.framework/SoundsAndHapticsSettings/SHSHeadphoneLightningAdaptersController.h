@class ADASManager;

@interface SHSHeadphoneLightningAdaptersController : PSListController

@property (retain, nonatomic) ADASManager *audioSettingsManager;

- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)getConnectedToHeadphonesEnabled;
- (void)confirmForgetLightningAdaptersAction;
- (void)deleteAllLightningAdapterData;
- (void)setConnectedToHeadphonesEnabled:(id)a0 forSpecifier:(id)a1;

@end
