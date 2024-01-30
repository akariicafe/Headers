@class NSArray, ADTrackingTransparency;

@interface PUITrackersController : PUITCCAccessController

@property (retain, nonatomic) NSArray *appSpecifiers;
@property (retain, nonatomic) ADTrackingTransparency *adTrackingTransparency;

+ (BOOL)isServiceRestricted:(id)a0;

- (void).cxx_destruct;
- (void)headerLinkWasTapped;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setAllowAsk:(id)a0 specifier:(id)a1;
- (id)allowAsk:(id)a0;
- (BOOL)canChangeAllowAsk;
- (void)disableTCCForAllApps;
- (id)appsRequested:(id)a0;

@end
