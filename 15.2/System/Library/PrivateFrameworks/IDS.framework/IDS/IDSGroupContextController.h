@class CUTPromiseSeal, NSString, NSObject;
@protocol OS_dispatch_queue, IDSGroupContextControllerDelegate;

@interface IDSGroupContextController : NSObject <IDSTransactionLogTaskHandlerDelegate, IDSGroupContextNotifyingObserverDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) id<IDSGroupContextControllerDelegate> delegate;
@property (retain, nonatomic) CUTPromiseSeal *seal;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceName:(id)a0 queue:(id)a1 delegate:(id)a2;
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(id /* block */)a0;
- (void)didUpdateGroup:(id)a0 withNewGroup:(id)a1 completion:(id /* block */)a2;
- (void)qSetupSeal;
- (void)taskHandler:(id)a0 persistToken:(id)a1 completion:(id /* block */)a2;
- (void)_contentWithCompletion:(id /* block */)a0;
- (void)didCreateGroup:(id)a0 completion:(id /* block */)a1;
- (void)persistedTokenForTaskHandler:(id)a0 completion:(id /* block */)a1;
- (void)didReceiveDecryptionFailureForGroup:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)groupContextWithCompletion:(id /* block */)a0;
- (void)taskHandler:(id)a0 messagesFromToken:(id)a1 completion:(id /* block */)a2;
- (void)scheduleTransactionLogTask:(id)a0;
- (void)taskHandler:(id)a0 participantsWithDestinations:(id)a1 completion:(id /* block */)a2;
- (void)didCacheGroup:(id)a0 completion:(id /* block */)a1;
- (void)qGroupContextWithDeviceIdentity:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)taskHandler:(id)a0 accountInfoForAliases:(id)a1 completion:(id /* block */)a2;
- (void)taskHandler:(id)a0 groupsWithGroupIDs:(id)a1 completion:(id /* block */)a2;

@end
