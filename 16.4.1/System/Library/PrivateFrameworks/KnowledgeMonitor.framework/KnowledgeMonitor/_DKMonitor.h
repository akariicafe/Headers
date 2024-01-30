@class NSDictionary, _DKEvent, NSMutableDictionary, NSSet, NSDate, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface _DKMonitor : NSObject <_DKInstantMonitor, _DKHistoricalMonitor> {
    NSDictionary *_state;
    NSString *_bootSessionUUID;
}

@property unsigned long long machTimeAtLastClockChange;
@property (retain) NSDate *dateAtLastClockChange;
@property (retain, nonatomic) NSDate *lastUpdate;
@property (retain, nonatomic) _DKEvent *currentEvent;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly, nonatomic) NSMutableDictionary *instantState;
@property (readonly, nonatomic) NSMutableDictionary *historicalState;
@property (copy, nonatomic) id /* block */ eventComparator;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) long long references;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSSet *classesForSecureStateDecoding;
@property (copy, nonatomic) id /* block */ instantHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ historicalHandler;
@property (copy, nonatomic) id /* block */ shutdownHandler;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;

- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (id)loadState;
- (void)update;
- (void)dealloc;
- (void)invalidateInstantState;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)setCurrentEvent:(id)a0 inferHistoricalState:(BOOL)a1;
- (BOOL)instantMonitorNeedsDeactivation;
- (void)endCurrentEvent:(id)a0;
- (BOOL)historicalStateHasChanged:(id)a0;
- (BOOL)instantMonitorNeedsActivation;
- (void)systemClockDidChange:(id)a0;

@end
