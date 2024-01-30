@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SiriCoreNetworkActivityTracing : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activities;
    NSMutableSet *_connections;
}

+ (id)sharedNetworkActivityTracing;

- (void)_networkActivityRemoveNWConnection:(id)a0 completion:(id /* block */)a1;
- (void)networkActivityRemoveNWConnection:(id)a0 completion:(id /* block */)a1;
- (void)networkActivityAddNWConnection:(id)a0;
- (void)_networkActivityStop:(long long)a0 withReason:(long long)a1 andError:(id)a2;
- (void)networkActivityStart:(long long)a0 activate:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)networkActivityTracingCancel;
- (void)_networkActivityActivate:(long long)a0;
- (void)_networkActivityStart:(long long)a0 activate:(BOOL)a1;
- (void)networkActivityActivate:(long long)a0;
- (void)_networkActivityTracingCancel;
- (void)_networkActivityAddNWConnection:(id)a0;
- (void)networkActivityStop:(long long)a0 withReason:(long long)a1 andError:(id)a2;
- (void)currentNetworkActivityTokenWithCompletion:(id /* block */)a0;

@end
