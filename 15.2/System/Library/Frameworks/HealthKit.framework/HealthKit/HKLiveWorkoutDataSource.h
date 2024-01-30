@class NSUUID, NSString, HKTaskServerProxyProvider, NSSet, NSMutableDictionary, HKHealthStore, NSMutableSet, NSObject, HKWorkoutConfiguration;
@protocol OS_dispatch_queue;

@interface HKLiveWorkoutDataSource : NSObject <_HKXPCExportable> {
    HKWorkoutConfiguration *_workoutConfiguration;
}

@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *mutableSampleTypesToCollect;
@property (retain, nonatomic) NSMutableDictionary *mutableFiltersBySampleType;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy) NSSet *typesToCollect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConfigurationWithWorkoutConfiguration:(id)a0 activityMoveMode:(long long)a1;
+ (id)serverInterface;
+ (id)clientInterface;

- (void)connectionInvalidated;
- (void)workoutBuilderDidFinish;
- (id)initWithHealthStore:(id)a0 workoutConfiguration:(id)a1;
- (id)remoteInterface;
- (void)_queue_finishSetup;
- (id)_queue_dataSourceConfiguration;
- (void)enableCollectionForType:(id)a0 predicate:(id)a1;
- (void)disableCollectionForType:(id)a0;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;

@end
