@class BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface FBSOpenApplicationService : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}

+ (id)new;
+ (id)serviceWithEndpoint:(id)a0;
+ (BOOL)currentProcessServicesDefaultShellEndpoint;
+ (id)serviceName;
+ (id)serviceWithDefaultShellEndpoint;

- (void)openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;
- (BOOL)canOpenApplication:(id)a0 reason:(long long *)a1;
- (id)_initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_remoteTarget;
- (void)_openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;
- (void)openApplication:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;

@end
