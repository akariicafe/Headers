@class RTTimer, RTTimerManager, NSDate, RTLocationManager, NSObject;
@protocol OS_dispatch_queue, RTDelayedLocationRequesterDelegate;

@interface RTDelayedLocationRequester : NSObject

@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTTimer *delayTimer;
@property (retain, nonatomic) RTTimer *activeTimer;
@property (readonly, nonatomic) double maxHorizontalAccuracy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSDate *activeStartDate;
@property (retain, nonatomic) id<RTDelayedLocationRequesterDelegate> delegate;

- (void)shutdown;
- (id)init;
- (void)_updateDelayTimer;
- (void).cxx_destruct;
- (id)initWithLocationManager:(id)a0 maxHorizontalAccuracy:(double)a1 queue:(id)a2;
- (void)_onDelayTimerExpiry;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)updateFireDate:(id)a0 handler:(id /* block */)a1;
- (void)_startUpdatingLocation;
- (void)_onActiveTimerExpiry;
- (void)updateFireDate:(id)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (id)initWithLocationManager:(id)a0 timerManager:(id)a1 maxHorizontalAccuracy:(double)a2 queue:(id)a3;
- (void)_onLocation:(id)a0;
- (void)onLocationNotification:(id)a0;
- (void)_updateFireDate:(id)a0 handler:(id /* block */)a1;
- (void)_stopUpdatingLocation;

@end
