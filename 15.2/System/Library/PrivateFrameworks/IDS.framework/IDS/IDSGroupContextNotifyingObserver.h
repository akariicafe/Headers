@class NSMutableSet;

@interface IDSGroupContextNotifyingObserver : NSObject <IDSGroupContextObserverDaemonProtocol>

@property (retain, nonatomic) NSMutableSet *delegates;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(id /* block */)a0;
- (void)didUpdateGroup:(id)a0 withNewGroup:(id)a1 completion:(id /* block */)a2;
- (void)didCreateGroup:(id)a0 completion:(id /* block */)a1;
- (void)didReceiveDecryptionFailureForGroup:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)didCacheGroup:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end
