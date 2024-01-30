@class BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface FBSOpenApplicationService : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}

+ (id)serviceName;
+ (id)new;
+ (id)serviceWithDefaultShellEndpoint;
+ (BOOL)currentProcessServicesDefaultShellEndpoint;
+ (id)serviceWithEndpoint:(id)a0;

- (void)dealloc;
- (id)_remoteTarget;
- (id)init;
- (id)_initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (BOOL)canOpenApplication:(id)a0 reason:(long long *)a1;
- (void)openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;
- (void)openApplication:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)_openApplication:(id)a0 withOptions:(id)a1 clientHandle:(id)a2 completion:(id /* block */)a3;

@end
