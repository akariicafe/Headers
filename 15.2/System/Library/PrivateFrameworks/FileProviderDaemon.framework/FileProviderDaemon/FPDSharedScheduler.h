@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface FPDSharedScheduler : NSObject {
    NSObject<OS_xpc_object> *_activity;
    NSObject<OS_xpc_object> *_criteria;
    NSString *_label;
    NSMutableDictionary *_executors;
    BOOL _registered;
    long long _alwaysRunnableCount;
    NSDate *_lastRegistrationDate;
    NSDate *_lastTriggerDate;
    NSDate *_lastUsageDate;
    BOOL _preventRunning;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *queue;

@property BOOL preventRunning;

- (void)removeKey:(id)a0;
- (void)ping;
- (void)registerActivity;
- (id)description;
- (BOOL)canRun;
- (void).cxx_destruct;
- (BOOL)shouldPause;
- (BOOL)canOrIsForcedToRun;
- (void)unregisterActivity;
- (void)_removeKey:(id)a0;
- (id)initWithLabel:(id)a0 criteria:(id)a1;
- (void)markDoneForKey:(id)a0;
- (void)addKey:(id)a0 executor:(id /* block */)a1;
- (BOOL)runIfPossible:(id /* block */)a0;
- (id /* block */)forceRunningWithReason:(id)a0;

@end
