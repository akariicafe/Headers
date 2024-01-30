@class NSObject, HKQuantitySeriesSampleBuilderTaskServerConfiguration, NSError, NSMutableArray, HKQuantitySample;
@protocol OS_dispatch_queue;

@interface HDQuantitySeriesBuilderTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleBuilderTaskServerInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    HKQuantitySample *_series;
    long long _state;
    NSMutableArray *_values;
    NSError *_fatalError;
    id /* block */ _queue_activeHandler;
    HKQuantitySeriesSampleBuilderTaskServerConfiguration *_configuration;
}

@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ unitTest_saveSamplesCompletion;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;

- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)remote_insertQuantitySeries:(id)a0 completion:(id /* block */)a1;
- (void)remote_finishSeriesWithMetadata:(id)a0 endDate:(id)a1 finalSeries:(id)a2 completion:(id /* block */)a3;
- (void)remote_discardWithCompletion:(id /* block */)a0;
- (void)_queue_insertQuantitySeries:(id)a0 completion:(id /* block */)a1;
- (void)_queue_finishSeriesWithMetadata:(id)a0 endDate:(id)a1 completion:(id /* block */)a2;
- (void)_queue_discardWithCompletion:(id /* block */)a0;
- (BOOL)_queue_isStateInAllowedStates:(id)a0 description:(id)a1 error:(out id *)a2;
- (void)_queue_newSeriesSaveCompleted;
- (BOOL)_queue_insertQuantitySeries:(id)a0 series:(id)a1 forceInsert:(BOOL)a2 error:(id *)a3;
- (BOOL)_canSaveOrSanitizeMetadata:(id *)a0 error:(id *)a1;

@end
