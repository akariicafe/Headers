@class NSHashTable, NSString, NSArray, IDSService, NSDictionary, NSMutableArray, IDSAccountController, CRKArrayDifferenceEngine;

@interface CRKConcreteIDSLocalPrimitives : NSObject <IDSServiceDelegate, IDSAccountControllerDelegate, CRKConcreteIDSMessageDidSendSubscriptionDelegate, CRKConcreteIDSMessageDidReceiveSubscriptionDelegate, CRKIDSLocalPrimitives>

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) IDSService *service;
@property (readonly, nonatomic) IDSAccountController *accountController;
@property (readonly, nonatomic) CRKArrayDifferenceEngine *accountsDifferenceEngine;
@property (readonly, nonatomic) NSMutableArray *backingAccounts;
@property (readonly, nonatomic) NSHashTable *didSendSubscriptions;
@property (readonly, nonatomic) NSHashTable *didReceiveSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (readonly, copy, nonatomic) NSArray *accounts;

+ (id)makeAccountsDifferenceEngineForPrimitives:(id)a0;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)accountController:(id)a0 accountAdded:(id)a1;
- (id)initWithServiceName:(id)a0;
- (void)accountController:(id)a0 accountRemoved:(id)a1;
- (void).cxx_destruct;
- (void)insertObject:(id)a0 inAccountsAtIndex:(unsigned long long)a1;
- (void)didReceiveSubscriptionDidCancel:(id)a0;
- (void)didReceiveSubscriptionDidResume:(id)a0;
- (void)didSendSubscriptionDidCancel:(id)a0;
- (void)didSendSubscriptionDidResume:(id)a0;
- (void)fetchFirewallWithCompletion:(id /* block */)a0;
- (void)insertAccounts:(id)a0 atIndexes:(id)a1;
- (void)publishAccountChanges;
- (void)removeAccountsAtIndexes:(id)a0;
- (void)removeObjectFromAccountsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInAccountsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (BOOL)sendMessage:(id)a0 toAddress:(id)a1 fromID:(id)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (id)subscribeToMessageReceivesWithHandler:(id /* block */)a0;
- (id)subscribeToMessageSendsWithHandler:(id /* block */)a0;

@end
