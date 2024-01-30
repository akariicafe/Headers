@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriQueueMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _numberOfTransactions;
    NSMutableDictionary *_observersByIdentifier;
}

+ (id)sharedMonitor;

- (void)_beginMonitoring;
- (void)endMonitoring;
- (void)beginMonitoring;
- (id)init;
- (void).cxx_destruct;
- (void)_addQueue:(id)a0 heartBeatInterval:(double)a1 timeoutInterval:(double)a2 timeoutHandler:(id /* block */)a3;
- (void)_endMonitoring;
- (void)_removeQueue:(id)a0;
- (void)addQueue:(id)a0 heartBeatInterval:(double)a1 timeoutInterval:(double)a2 timeoutHandler:(id /* block */)a3;
- (void)removeQueue:(id)a0;

@end
