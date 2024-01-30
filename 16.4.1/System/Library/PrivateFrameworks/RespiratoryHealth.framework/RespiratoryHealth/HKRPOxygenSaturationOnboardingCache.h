@class NSNumber, NSUserDefaults;
@protocol HKRPUserDefaultsSyncProviding;

@interface HKRPOxygenSaturationOnboardingCache : NSObject {
    NSUserDefaults *_userDefaults;
    id<HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;
}

@property (copy, nonatomic) NSNumber *hasCompletedOnboarding;

- (id)initWithUserDefaults:(id)a0 userDefaultsSyncProvider:(id)a1;
- (void).cxx_destruct;

@end
