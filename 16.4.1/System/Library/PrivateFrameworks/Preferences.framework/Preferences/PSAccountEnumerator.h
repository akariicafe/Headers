@class ACMonitoredAccountStore, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PSAccountEnumerator : NSObject <ACMonitoredAccountStoreDelegateProtocol>

@property (class, readonly) PSAccountEnumerator *sharedEnumerator;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_accountUpdateQueue;
@property (retain, nonatomic) ACMonitoredAccountStore *_monitoredAccountStore;
@property (nonatomic) long long visibleAccountCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_visibleAccountTypeIDs;

- (void)accountWasRemoved:(id)a0;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)_handleAccountStoreDidUpdateIsInitialLoad:(BOOL)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (id)init;
- (void)_reloadAccountStoreStateIsInitialLoad:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
