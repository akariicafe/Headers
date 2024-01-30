@class NSArray, NSString, CATTaskServer, NSMutableDictionary, NSMutableSet, NSMapTable;

@interface CATTaskBlockServer : NSObject <CATTaskServerDelegate> {
    CATTaskServer *mServer;
    NSMutableDictionary *mOperationBlocksByRequestClassName;
    NSMutableSet *mLongRunningOperationRequestClassNames;
    NSMapTable *mLongRunningOperationsByUUID;
}

@property (readonly, copy, nonatomic) NSArray *clientSessions;
@property (copy, nonatomic) id /* block */ sessionDidConnect;
@property (copy, nonatomic) id /* block */ sessionDidReceiveNotification;
@property (copy, nonatomic) id /* block */ sessionDidInterruptWithError;
@property (copy, nonatomic) id /* block */ sessionDidDisconnect;
@property (copy, nonatomic) id /* block */ sessionDidInvalidate;
@property (copy, nonatomic) id /* block */ didInvalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)disconnectAllClientSessions;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)serverDidInvalidate:(id)a0;
- (id)server:(id)a0 clientSession:(id)a1 operationForRequest:(id)a2 error:(id *)a3;
- (void)server:(id)a0 clientSession:(id)a1 didInterruptWithError:(id)a2;
- (void)server:(id)a0 clientSession:(id)a1 didReceiveNotificationWithName:(id)a2 userInfo:(id)a3;
- (void)server:(id)a0 clientSessionDidConnect:(id)a1;
- (void)server:(id)a0 clientSessionDidDisconnect:(id)a1;
- (void)server:(id)a0 clientSessionDidInvalidate:(id)a1;
- (id)createClientTransport;
- (void)registerBlock:(id /* block */)a0 forRequestClass:(Class)a1;
- (void)registerLongRunningOperationForRequestClass:(Class)a0;
- (void)cancelLongRunningOperationsForRequestClass:(Class)a0;

@end
