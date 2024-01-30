@class NSMutableDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface PLClientLogAggregator : NSObject

@property (readonly) NSMutableDictionary *aggregatesCache;
@property unsigned char numAggregates;
@property unsigned char numAggregations;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) NSObject<OS_dispatch_queue> *executionQueue;
@property (retain) NSObject<OS_dispatch_source> *flushTimer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_flushToPowerLog;
- (BOOL)_aggregateForClientID:(id)a0 eventName:(id)a1 eventDictionary:(id)a2 configuration:(id)a3;
- (BOOL)_isEventInputValid:(id)a0 configuration:(id)a1;
- (id)_eventAggregate:(id)a0 eventName:(id)a1 aggregateKey:(id)a2 valueLabel:(id)a3;
- (BOOL)_setEventAggregate:(id)a0 eventName:(id)a1 aggregateKey:(id)a2 valueLabel:(id)a3 value:(id)a4;
- (void)_scheduleFlushTimer;
- (void)cleanCache;
- (BOOL)aggregateForClientID_async:(short)a0 eventName:(id)a1 eventDictionary:(id)a2 configuration:(id)a3;

@end
