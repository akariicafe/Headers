@class HMFTimer, NSMutableDictionary, HMIHomePersonManagerSettings, NSOperationQueue, NSString;
@protocol HMIHomePersonManagerDataSource;

@interface HMIHomePersonManager : HMIPersonManager <HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) HMFTimer *watchdogTimer;
@property (readonly) HMFTimer *analyticsTimer;
@property (readonly) NSMutableDictionary *unknownFacesSavedCounts;
@property (readonly) HMIHomePersonManagerSettings *settings;
@property (weak, nonatomic) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)_updateSettings:(id)a0;
- (void).cxx_destruct;
- (void)handleRemovedFaceprintWithUUID:(id)a0;
- (void)handleMisclassifiedPersonForFaceCrop:(id)a0;
- (void)handleRemovedFaceCropWithUUID:(id)a0;
- (void)handleRemovedPersonWithUUID:(id)a0;
- (void)handleUpdatedFaceprint:(id)a0;
- (void)handleUpdatedPerson:(id)a0;
- (void)handleUpdatedPersonFaceCrop:(id)a0;
- (void)handleUpdatedSettings:(id)a0;
- (void)handleUpdatedUnassociatedFaceCrop:(id)a0;
- (id)initWithUUID:(id)a0 homeUUID:(id)a1;
- (void)handleNewFaceEvents:(id)a0;
- (void)storeFaceprint:(id)a0 completion:(id /* block */)a1;
- (void)storeUnassociatedFaceCrop:(id)a0 completion:(id /* block */)a1;

@end
