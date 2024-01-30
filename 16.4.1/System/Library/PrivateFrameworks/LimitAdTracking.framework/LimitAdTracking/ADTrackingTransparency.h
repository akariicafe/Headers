@class NSArray;

@interface ADTrackingTransparency : NSObject

@property (readonly, nonatomic) BOOL crossAppTrackingAllowedSwitchEnabled;
@property (readonly, nonatomic) long long crossAppTrackingAllowedSwitchDisabledReason;
@property (nonatomic) BOOL crossAppTrackingAllowed;
@property (readonly, nonatomic) BOOL personalizedAdsSwitchEnabled;
@property (readonly, nonatomic) long long personalizedAdsSwitchDisabledReason;
@property (nonatomic) BOOL personalizedAds;
@property (readonly, nonatomic) BOOL personalizedAdsAvailable;
@property (readonly, nonatomic) BOOL shouldShowPersonalizedAdsToggle;
@property (readonly, nonatomic) BOOL shouldPresentPersonalizedAdsOnboarding;
@property (readonly, nonatomic) BOOL personalizedAdsAvailableForAppStore;
@property (nonatomic) long long acknowledgedVersionForPersonalizedAds;
@property (readonly, nonatomic) long long latestVersionForPersonalizedAdsConsent;
@property (readonly, nonatomic) NSArray *adSwitchDisabledReasons;

- (BOOL)shouldDisplayPAUI;
- (BOOL)_userAllowedToChangeSettings;
- (BOOL)isPersonalizedAdsScreenTimeRestricted;
- (long long)accountLevelSwitchDisabledReason;
- (id)appTrackingServiceProxy:(id)a0;
- (void)personalizedAdsAvailable:(id /* block */)a0;
- (long long)accountRestrictionReason;
- (id)appTrackingXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (BOOL)_isUserManagedRestricted;
- (BOOL)_isUserEDURestricted;

@end
