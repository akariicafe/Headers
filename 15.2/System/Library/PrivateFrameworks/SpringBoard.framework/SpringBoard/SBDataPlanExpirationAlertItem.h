@class NSDate;

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem

@property (retain, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithAccountURL:(id)a0 expirationDate:(id)a1;

@end
