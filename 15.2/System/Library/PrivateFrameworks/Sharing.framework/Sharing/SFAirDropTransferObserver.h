@class NSString, NSMutableDictionary;
@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol>

@property (retain) NSMutableDictionary *transferIdentifierToTransfer;
@property (weak, nonatomic) id<SFAirDropTransferObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectInterface;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)updatedTransfer:(id)a0;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)updateActionHandlersOnTransfer:(id)a0;
- (id)init;
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)a0;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)exportedInterface;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)a0;
- (void)removedTransfer:(id)a0;

@end
