@class HRProfile;

@interface WDClinicalAuthorizationSettingsViewController : HKClinicalAuthorizationSettingsViewController

@property (readonly, weak, nonatomic) HRProfile *profile;

+ (id)contextUsingProfile:(id)a0 source:(id)a1;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 style:(long long)a1;
- (id)initWithProfile:(id)a0 source:(id)a1;

@end
