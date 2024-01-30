@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SiriCoreNetworkActivityTracing : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activities;
    NSMutableSet *_connections;
}

+ (id)sharedNetworkActivityTracing;

- (void)networkActivityStart:(long long)a0 activate:(BOOL)a1;
- (void)_networkActivityStop:(long long)a0 withReason:(long long)a1;
- (id)init;
- (void)_networkActivityStart:(long long)a0 activate:(BOOL)a1;
- (void).cxx_destruct;
- (void)networkActivityStop:(long long)a0 withReason:(long long)a1;
- (void)networkActivityTracingCancel;
- (void)networkActivityActivate:(long long)a0;
- (void)_networkActivityTracingCancel;
- (void)_networkActivityRemoveNWConnection:(id)a0 completion:(id /* block */)a1;
- (void)networkActivityAddNWConnection:(id)a0;
- (void)currentNetworkActivityTokenWithCompletion:(id /* block */)a0;
- (void)_networkActivityAddNWConnection:(id)a0;
- (void)_networkActivityActivate:(long long)a0;
- (void)networkActivityRemoveNWConnection:(id)a0 completion:(id /* block */)a1;

@end
