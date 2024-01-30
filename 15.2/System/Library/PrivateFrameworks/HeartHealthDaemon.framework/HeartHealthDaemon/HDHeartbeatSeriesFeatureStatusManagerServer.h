@class NSString, HDHeartbeatSeriesFeatureStatusManager;

@interface HDHeartbeatSeriesFeatureStatusManagerServer : HDStandardTaskServer <HKHeartbeatSeriesFeatureStatusManagerServer, HDHeartbeatSeriesFeatureStatusManagerDelegate> {
    HDHeartbeatSeriesFeatureStatusManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (id)_clientRemoteObjectProxy;
- (void)remote_stopObservingChanges;
- (void)remote_updateAndNotifyAllObservers;
- (void)heartbeatSeriesFeatureStatusManager:(id)a0 didUpdatePredominantFeature:(long long)a1;
- (void)heartbeatSeriesFeatureStatusManager:(id)a0 didFailToUpdateWithError:(id)a1;

@end
