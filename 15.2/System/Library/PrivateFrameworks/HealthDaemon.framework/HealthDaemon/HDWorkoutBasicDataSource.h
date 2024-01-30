@class NSLock, NSString, NSUUID, HDDataCollectionAssertion, NSSet, HKDataFlowLink, HDProfile, HKWorkoutConfiguration, HDClientDataCollectionObservationStateMonitor, HDHealthStoreClient;

@interface HDWorkoutBasicDataSource : NSObject <HDDataObserver, HKDataFlowLinkProcessor, HDClientDataCollectionObservationStateMonitorDelegate, HDWorkoutDataSource> {
    HDProfile *_profile;
    HDHealthStoreClient *_client;
    NSLock *_lock;
    HKDataFlowLink *_workoutDataFlowLink;
    NSUUID *_workoutDataProcessorUUID;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSSet *_sampleTypesToCollect;
    HDDataCollectionAssertion *_collectionAssertion;
    HDClientDataCollectionObservationStateMonitor *_clientStateMonitor;
}

@property (copy, nonatomic) NSSet *sampleTypesToCollect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)setWorkoutConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 client:(id)a1;
- (void)samplesJournaled:(id)a0 type:(id)a1;
- (void)dealloc;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)dataCollectionObservationStateDidChangeForClient:(id)a0;

@end
