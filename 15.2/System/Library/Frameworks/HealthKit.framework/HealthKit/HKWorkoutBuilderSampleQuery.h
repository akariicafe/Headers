@class HKWorkoutBuilder, NSString;

@interface HKWorkoutBuilderSampleQuery : HKQuery <HKWorkoutBuilderSampleQueryClientInterface> {
    id /* block */ _samplesAddedHandler;
    BOOL _needsHistoricalFetch;
}

@property (weak, nonatomic) HKWorkoutBuilder *workoutBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void)queue_validate;
- (void)queue_deliverError:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)a0;
- (void)client_deliverSamples:(id)a0 hasFinishedHistoricalFetch:(BOOL)a1 queryUUID:(id)a2;
- (id)initWithSampleType:(id)a0 workoutBuilder:(id)a1 samplesAddedHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)queue_populateConfiguration:(id)a0;

@end
