@class NSString;

@interface SBDataPlanFailureAlertItem : SBDataPlanAccountAlertItem

@property (copy, nonatomic) NSString *carrierName;
@property (nonatomic, getter=isNewAccount) BOOL newAccount;

+ (id)laterButtonTitle;
+ (id)nowButtonTitle;

- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithAccountURL:(id)a0 carrierName:(id)a1 newAccount:(BOOL)a2;

@end
