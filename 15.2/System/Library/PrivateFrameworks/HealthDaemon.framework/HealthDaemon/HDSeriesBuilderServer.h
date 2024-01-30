@class HDSeriesBuilderEntity, HKSeriesSample, NSString, NSObject, HKSeriesBuilderConfiguration;
@protocol OS_dispatch_queue;

@interface HDSeriesBuilderServer : HDStandardTaskServer <HKSeriesBuilderServerInterface>

@property (copy, nonatomic) HKSeriesBuilderConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) long long queue_state;
@property (retain, nonatomic) HKSeriesSample *seriesSample;
@property (retain, nonatomic) HDSeriesBuilderEntity *persistentEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;

- (void)connectionInvalidated;
- (void)remote_discardWithCompletion:(id /* block */)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)remote_recoverWithCompletion:(id /* block */)a0;
- (void)remote_freezeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)remote_addMetadata:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (void)queue_freezeBuilderWithCompletion:(id /* block */)a0;
- (BOOL)queue_canInsertDataWithError:(id *)a0;
- (BOOL)canAddMetadata:(id)a0 errorOut:(id *)a1;
- (void)createSeriesSampleIfNeeded:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)queue_setState:(long long)a0 completion:(id /* block */)a1;
- (void)queue_recoverBuilder;
- (void)associateToWorkoutBuilderWithCompletion:(id /* block */)a0;

@end
