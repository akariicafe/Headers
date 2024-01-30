@interface SidecarDisplayReceivingManager : NSObject

- (void)disconnectFromDeviceWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchSendingDeviceSessionStatesWithCompletion:(id /* block */)a0;
- (void)requestConnectionFromDeviceWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
