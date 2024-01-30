@class NSString, _DKEvent, NSDate;

@interface _DKNotificationWatchNearbyMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    BOOL _enabled;
    int _token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ instantHandler;
@property (readonly, nonatomic) _DKEvent *currentEvent;
@property (copy, nonatomic) id /* block */ historicalHandler;
@property (copy, nonatomic) id /* block */ shutdownHandler;
@property (readonly, nonatomic) NSDate *lastUpdate;

+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsWatchNearby:(BOOL)a0;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)_eventWithNearbyDeviceCount:(unsigned long long)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)setWatchIsNearby;
- (void)receiveNotificationEvent:(id)a0;
- (void)deactivate;

@end
