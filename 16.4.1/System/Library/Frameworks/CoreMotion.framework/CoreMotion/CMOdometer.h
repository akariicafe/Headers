@class CMOdometerProxy;
@protocol CMOdometerDelegate;

@interface CMOdometer : NSObject

@property (readonly, nonatomic) CMOdometerProxy *odometerProxy;
@property (nonatomic) id<CMOdometerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void)startCyclingWorkoutDistanceUpdatesWithHandler:(id /* block */)a0;
- (void)startOdometerUpdatesForActivity:(long long)a0 withHandler:(id /* block */)a1;
- (void)stopCyclingWorkoutDistanceUpdates;
- (void)stopOdometerUpdates;

@end
