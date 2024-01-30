@class NSString;

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem

@property (copy, nonatomic) NSString *carrierName;
@property (nonatomic, getter=isNewAccount) BOOL newAccount;

- (void).cxx_destruct;
- (id)initWithCarrierName:(id)a0 newAccount:(BOOL)a1;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;

@end
