@class NSObject, BSAction;
@protocol OS_dispatch_queue;

@interface BSBlockSentinel : NSObject {
    BSAction *_sentinelAction;
    id /* block */ _handler;
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_explicitQueue;
}

+ (id)sentinelWithQueue:(id)a0 signalCount:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)sentinelWithSignalCount:(unsigned long long)a0 exceptionReason:(id)a1;
+ (id)sentinelWithExceptionReason:(id)a0;
+ (id)sentinelWithQueue:(id)a0 signalHandler:(id /* block */)a1;
+ (id)sentinelWithQueue:(id)a0 signalCount:(unsigned long long)a1 signalHandler:(id /* block */)a2;
+ (id)sentinelWithQueue:(id)a0 completion:(id /* block */)a1;

- (BOOL)signal;
- (BOOL)signalWithContext:(id)a0;
- (void).cxx_destruct;

@end
