@class INCExtensionConnection, SARemoteDevice;

@interface WFRemoteExtensionProxy : NSObject <INCExtensionProxy>

@property (readonly, nonatomic) INCExtensionConnection *connection;
@property (readonly, copy, nonatomic) SARemoteDevice *remoteDevice;

- (void)handleIntentWithCompletionHandler:(id /* block */)a0;
- (void)confirmIntentWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resolveIntentSlotKeyPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveIntentSlotKeyPaths:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConnection:(id)a0 andDevice:(id)a1;
- (void)handleIntentRemotelyWithRemoteOperation:(id)a0 completion:(id /* block */)a1;

@end
