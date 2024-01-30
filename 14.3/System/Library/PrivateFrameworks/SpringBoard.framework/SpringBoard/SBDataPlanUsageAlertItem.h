@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem

@property (retain, nonatomic) NSNumber *remainingPortion;

- (void).cxx_destruct;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithAccountURL:(id)a0 usage:(id)a1;

@end
