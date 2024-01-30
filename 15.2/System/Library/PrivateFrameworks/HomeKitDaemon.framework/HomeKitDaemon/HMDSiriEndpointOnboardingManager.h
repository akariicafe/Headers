@class HMFUnfairLock, NSMutableDictionary;
@protocol HMDSiriEndpointOnboardingManagerDataSource;

@interface HMDSiriEndpointOnboardingManager : NSObject {
    NSMutableDictionary *_onboardingSelections;
    HMFUnfairLock *_lock;
}

@property (weak) id<HMDSiriEndpointOnboardingManagerDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)applyOnboardingSelections:(id)a0 accessoryUUID:(id)a1 homeUUID:(id)a2 completion:(id /* block */)a3;
- (void)handleCompositeSettingsControllerConfigured:(id)a0;
- (void)handleAccessoryConfigured:(id)a0;
- (void)applyCachedOnboardingSelectionsWithAccessoryUUID:(id)a0 homeUUID:(id)a1;
- (void)_setNeedsOnboardingCompleteWitHomeUUID:(id)a0 accessoryUUID:(id)a1 completion:(id /* block */)a2;
- (BOOL)readyToApplyOnboardingSelectionsWithHomeUUID:(id)a0 accessoryUUID:(id)a1;

@end
