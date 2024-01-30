@class NSString, NSMutableDictionary;
@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol>

@property (retain) NSMutableDictionary *transferIdentifierToTransfer;
@property (weak, nonatomic) id<SFAirDropTransferObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)removedTransfer:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)updateActionHandlersOnTransfer:(id)a0;
- (void)activate;
- (id)exportedInterface;
- (id)machServiceName;
- (id)remoteObjectInterface;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)a0;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)a0;
- (void)updatedTransfer:(id)a0;

@end
