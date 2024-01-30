@class NSString;

@interface HKWorkoutRouteBuilder : HKSeriesBuilder <HKSeriesBuilderClientInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (void)configureServerInterface:(id)a0;
+ (void)configureClientInterface:(id)a0;
+ (id)clientInterface;
+ (id)taskServerIdentifier;

- (id)remoteInterface;
- (id)exportedInterface;
- (id)init;
- (void)_resourceQueue_finishRouteWithWorkout:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (void)_resourceQueue_insertRouteData:(id)a0 completion:(id /* block */)a1;
- (void)addMetadata:(id)a0 completion:(id /* block */)a1;
- (void)finishRouteWithWorkout:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (id)initWithHealthStore:(id)a0 device:(id)a1;
- (id)initWithHealthStore:(id)a0 identifier:(id)a1 device:(id)a2 workoutBuilderID:(id)a3;
- (void)insertRouteData:(id)a0 completion:(id /* block */)a1;

@end
