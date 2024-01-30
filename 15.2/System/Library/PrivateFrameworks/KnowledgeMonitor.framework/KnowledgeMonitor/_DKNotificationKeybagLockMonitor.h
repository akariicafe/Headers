@class NSString, _DKEvent, NSDate;

@interface _DKNotificationKeybagLockMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    BOOL _enabled;
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

+ (int)getCurrentLockState;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (id)_eventWithState:(id)a0;
+ (void)setIsLocked:(BOOL)a0;
+ (id)entitlements;

- (void)synchronouslyReflectCurrentValue;
- (void)receiveNotificationEvent:(id)a0;
- (void)start;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
