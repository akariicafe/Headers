@class NSString, _DKEvent, NSDate;

@interface _DKNotificationScreenLockImputedMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
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

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithState:(id)a0;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setIsLocked:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)dealloc;
- (void)stop;
- (id)fetchMostRecentScreenLockStateEventFromKnowledgeStore;
- (void)start;
- (void)receiveNotificationEvent:(id)a0;
- (void)setCurrentEventInInstantStateUsingLastKnowledgeStoreEvent;
- (void)deactivate;

@end
