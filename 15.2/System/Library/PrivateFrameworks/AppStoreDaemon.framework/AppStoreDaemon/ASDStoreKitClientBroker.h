@class NSString, NSMapTable;

@interface ASDStoreKitClientBroker : NSObject <ASDStoreKitClientProtocol> {
    NSMapTable *_clients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultBroker;

- (void)registerClient:(id)a0 withIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)askToShowMessageWithReplyBlock:(id /* block */)a0;
- (void)removedEntitlementsForProductIdentifiers:(id)a0;
- (void)updatedTransactions:(id)a0;
- (void)removedTransactions:(id)a0;
- (void)downloadAdded:(id)a0;
- (void)downloadStatusChanged:(id)a0;
- (void)downloadRemoved:(id)a0;
- (void)storefrontChanged:(id)a0;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)receivedStatuses:(id)a0;
- (void)receivedTransactions:(id)a0;
- (void)handleAuthenticateRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)unregisterClientWithIdentifier:(id)a0;

@end
