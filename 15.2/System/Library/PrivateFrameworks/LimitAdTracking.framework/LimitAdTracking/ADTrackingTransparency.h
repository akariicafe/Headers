@interface ADTrackingTransparency : NSObject

@property (readonly, nonatomic) BOOL crossAppTrackingAllowedSwitchEnabled;
@property (readonly, nonatomic) long long crossAppTrackingAllowedSwitchDisabledReason;
@property (nonatomic) BOOL crossAppTrackingAllowed;
@property (readonly, nonatomic) BOOL personalizedAdsSwitchEnabled;
@property (readonly, nonatomic) long long personalizedAdsSwitchDisabledReason;
@property (nonatomic) BOOL personalizedAds;
@property (readonly, nonatomic) BOOL personalizedAdsAvailable;
@property (readonly, nonatomic) BOOL personalizedAdsAvailableForAppStore;
@property (nonatomic) long long acknowledgedVersionForPersonalizedAds;
@property (readonly, nonatomic) long long latestVersionForPersonalizedAdsConsent;

- (BOOL)shouldDisplayPAUI;
- (BOOL)isPersonalizedAdsScreenTimeRestricted;
- (BOOL)_isUserManagedRestricted;
- (id)appTrackingXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (id)appTrackingServiceProxy:(id)a0;
- (BOOL)_isUserEDURestricted;
- (void)personalizedAdsAvailable:(id /* block */)a0;
- (BOOL)_userAllowedToChangeSettings;
- (long long)accountLevelSwitchDisabledReason;
- (long long)accountRestrictionReason;

@end
