@class NSDictionary;

@interface HUAccessoryHearingSettings : HCSettings

@property (retain, nonatomic) NSDictionary *activeHearingProtectionEnabled;
@property (retain, nonatomic) NSDictionary *activeHearingProtectionAvailable;

+ (id)sharedInstance;

- (id)keysToSync;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)logMessage:(id)a0;
- (BOOL)shouldStoreLocally;
- (id)activeHearingProtectionAvailable;
- (BOOL)activeHearingProtectionAvailableForAddress:(id)a0;
- (BOOL)activeHearingProtectionEnabledForAddress:(id)a0;
- (void)setActiveHearingProtectionEnabled:(BOOL)a0 forAddress:(id)a1;
- (id)activeHearingProtectionEnabled;
- (void)setActiveHearingProtectionAvailable:(id)a0;
- (void)setActiveHearingProtectionAvailable:(BOOL)a0 forAddress:(id)a1;
- (void)setActiveHearingProtectionEnabled:(id)a0;

@end
