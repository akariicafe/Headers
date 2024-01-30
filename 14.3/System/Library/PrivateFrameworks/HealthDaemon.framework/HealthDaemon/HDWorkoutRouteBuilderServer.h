@class NSString, HKWorkoutRoute;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface>

@property (retain, nonatomic) HKWorkoutRoute *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_insertRouteData:(id)a0 completion:(id /* block */)a1;
- (void)remote_finishRouteWithWorkout:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (id)seriesSample;
- (void)createSeriesSampleIfNeeded:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)queue_recoverBuilder;
- (void)_queue_insertRouteData:(id)a0 completion:(id /* block */)a1;
- (void)_queue_finishRouteWithWorkout:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (BOOL)_validateRouteData:(id)a0 error:(out id *)a1;
- (void)server_insertRouteData:(id)a0 completion:(id /* block */)a1;

@end
