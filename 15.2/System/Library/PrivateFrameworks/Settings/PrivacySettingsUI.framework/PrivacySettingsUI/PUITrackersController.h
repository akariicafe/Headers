@class ADTrackingTransparency, NSArray;

@interface PUITrackersController : PUITCCAccessController

@property (retain, nonatomic) ADTrackingTransparency *adTrackingTransparency;
@property (retain, nonatomic) NSArray *appSpecifiers;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)headerLinkWasTapped;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canChangeAllowAsk;
- (void)setAllowAsk:(id)a0 specifier:(id)a1;
- (id)allowAsk:(id)a0;
- (void)disableTCCForAllApps;

@end
