@class NSArray, NSTimer, MNActiveRouteInfo, MNLocation;
@protocol MNTimeAndDistanceUpdaterDelegate;

@interface MNTimeAndDistanceUpdater : NSObject {
    MNLocation *_location;
    NSArray *_routes;
    NSTimer *_minuteTimer;
    MNActiveRouteInfo *_mainRoute;
}

@property (weak, nonatomic) id<MNTimeAndDistanceUpdaterDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)startUpdating;
- (void)stopUpdating;
- (void)_startTimerToNextMinute;
- (void)updateDisplayETAForRoute:(id)a0 notificationType:(unsigned long long)a1;
- (void)setLocation:(id)a0 notificationType:(unsigned long long)a1;
- (void)setRoutes:(id)a0 mainRoute:(id)a1 location:(id)a2 notificationType:(unsigned long long)a3;

@end
