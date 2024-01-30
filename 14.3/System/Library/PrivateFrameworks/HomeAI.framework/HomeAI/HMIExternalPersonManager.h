@class HMFTimer, NSString, HMIExternalPersonManagerSettings, NSOperationQueue, HMFUnfairLock;
@protocol HMIExternalPersonManagerDataSource;

@interface HMIExternalPersonManager : HMIPersonManager <HMFTimerDelegate, HMFLogging>

@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) HMFTimer *watchdogTimer;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly) HMIExternalPersonManagerSettings *settings;
@property (weak, nonatomic) id<HMIExternalPersonManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)handleUpdatedPerson:(id)a0;
- (void)handleUpdatedPersonFaceCrop:(id)a0;
- (void)handleUpdatedFaceprint:(id)a0;
- (void)handleRemovedPersonWithUUID:(id)a0;
- (void)handleRemovedFaceCropWithUUID:(id)a0;
- (void)handleRemovedFaceprintWithUUID:(id)a0;
- (void)handleUpdatedSettings:(id)a0;
- (id)initWithUUID:(id)a0 homeUUID:(id)a1;
- (void)_updateSettings:(id)a0;

@end
