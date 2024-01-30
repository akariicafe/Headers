@class CMOdometerProxy;
@protocol CMOdometerDelegate;

@interface CMOdometer : NSObject

@property (readonly, nonatomic) CMOdometerProxy *odometerProxy;
@property (nonatomic) id<CMOdometerDelegate> delegate;

- (id)init;
- (void)startOdometerUpdatesForActivity:(long long)a0 withHandler:(id /* block */)a1;
- (void)stopOdometerUpdates;
- (void)dealloc;

@end
