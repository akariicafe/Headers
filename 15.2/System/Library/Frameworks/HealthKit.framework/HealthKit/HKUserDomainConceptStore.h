@class NSString, NSUUID, HKTaskServerProxyProvider;
@protocol HKUserDomainConceptStoreDelegate;

@interface HKUserDomainConceptStore : NSObject <_HKXPCExportable, HKUserDomainConceptStoreClientInterface> {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<HKUserDomainConceptStoreDelegate> _delegate;
}

@property (weak) id<HKUserDomainConceptStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)initWithHealthStore:(id)a0;
- (void)_storeUserDomainConcepts:(id)a0 method:(long long)a1 completion:(id /* block */)a2;
- (void)connectionInvalidated;
- (void)client_notifyForChangesToUserDomainConcepts:(id)a0 changeType:(long long)a1;
- (id)remoteInterface;
- (void)deleteUserDomainConcepts:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)saveOrUpdateUserDomainConcept:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (BOOL)_observeUserDomainConceptChanges:(BOOL)a0 error:(id *)a1;
- (void)deleteUserDomainConcept:(id)a0 completion:(id /* block */)a1;
- (void)_clientQueue_notifyForChangesToUserDomainConcepts:(id)a0 changeType:(long long)a1;
- (void)saveOrUpdateUserDomainConcepts:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;

@end
