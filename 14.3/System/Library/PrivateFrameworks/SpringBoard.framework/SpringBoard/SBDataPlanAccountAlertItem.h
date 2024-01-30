@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions>

@property (copy, nonatomic) NSURL *accountURL;

+ (id)laterButtonTitle;
+ (id)nowButtonTitle;

- (void).cxx_destruct;
- (void)notNow;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithAccountURL:(id)a0;
- (void)takeAction;

@end
