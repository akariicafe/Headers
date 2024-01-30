@class NSString, HKWorkoutRoute;

@interface HKWorkoutRouteQuery : HKQuery <HKWorkoutRouteQueryClientInterface> {
    HKWorkoutRoute *_series;
}

@property (copy) id /* block */ dataHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;

- (void)queue_deliverError:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)queue_populateConfiguration:(id)a0;
- (void)client_deliverWorkoutRouteLocations:(id)a0 isFinal:(BOOL)a1 query:(id)a2;
- (id)initWithRoute:(id)a0 dataHandler:(id /* block */)a1;

@end
