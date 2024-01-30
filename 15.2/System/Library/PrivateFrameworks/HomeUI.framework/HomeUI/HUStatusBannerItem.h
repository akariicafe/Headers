@class NSString, NSNumber, HMHome;
@protocol HFHomeKitObject;

@interface HUStatusBannerItem : HFItem <HFHomeKitItemProtocol, NSCopying>

@property (nonatomic) BOOL hasFetchedUpgradeOffer;
@property (retain, nonatomic) NSString *offerTitle;
@property (retain, nonatomic) NSString *offerMessage;
@property (retain, nonatomic) NSString *offerActionTitle;
@property (retain, nonatomic) NSNumber *planLimit;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)_determineRequiredAccessorySetupReminders:(id)a0;
- (id)_determineRequiredOnboardingReminders:(id)a0;
- (id)_namesOfAccessoriesNeedingNaturalLightingOnboarding;
- (id)_possibleDependentKeyPaths;
- (id)_determineRequiredLockAccessorySetupReminders:(id)a0;

@end
