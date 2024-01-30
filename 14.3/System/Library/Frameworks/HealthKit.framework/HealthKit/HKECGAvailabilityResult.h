@interface HKECGAvailabilityResult : NSObject

@property (readonly, nonatomic) BOOL advertiseDirectOnboarding;
@property (readonly, nonatomic) BOOL advertiseDirectOnboardingEscapeHatch;
@property (readonly, nonatomic) BOOL advertiseUpgrade;
@property (readonly, nonatomic) BOOL advertiseUpgradeEscapeHatch;

+ (id)resultWithAdvertiseDirectOnboarding:(BOOL)a0 advertiseDirectOnboardingSecondary:(BOOL)a1 advertiseUpgrade:(BOOL)a2 advertiseUpgradeSecondary:(BOOL)a3;
+ (id)resultWithNoAdvertisements;

- (id)initWithAdvertiseDirectOnboarding:(BOOL)a0 advertiseDirectOnboardingSecondary:(BOOL)a1 advertiseUpgrade:(BOOL)a2 advertiseUpgradeSecondary:(BOOL)a3;

@end
