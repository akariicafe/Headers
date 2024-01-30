@class NSString, NSObject;
@protocol RemoteUIManaging, OS_dispatch_queue, RemoteUIActivatorDelegate;

@interface RemoteUIManager : NSObject <RemoteUIActivatorDelegate, RemoteUIManaging> {
    id<RemoteUIManaging, RemoteUIActivatorDelegate> _responder;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)workQueue;
- (id)initWithConfig:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)checkClearForIdleExitWithCompletion:(id /* block */)a0;
- (void)connectRemoteUI:(id)a0 reply:(id /* block */)a1;
- (void)disconnectRemoteUI;
- (void)connectionToViewServiceInvalidated:(id /* block */)a0;
- (void)didReceiveExpectedError:(id)a0;
- (void)didReceiveUnexpectedError:(id)a0;
- (void)dismissRemoteUI:(id)a0 uiMechanism:(id)a1 uiDisappeared:(BOOL)a2 reply:(id /* block */)a3;
- (void)prepareForRemoteViewControllerWithMechanism:(id)a0 reply:(id /* block */)a1;
- (void)showUIWithParams:(id)a0 reply:(id /* block */)a1;

@end
