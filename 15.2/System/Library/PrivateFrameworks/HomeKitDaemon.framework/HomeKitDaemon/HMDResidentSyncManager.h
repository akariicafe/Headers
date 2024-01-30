@class NSPersistentStore, NSUUID, NSString, HMFMessageDispatcher, NSObject, HMDCoreData, NSPersistentHistoryToken, HMDManagedObjectTransmuter, HMDHome;
@protocol OS_dispatch_queue, HMFAsyncContext;

@interface HMDResidentSyncManager : NSObject <HMFMessageReceiver, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSUUID *_homeUUID;
    HMDHome *_home;
    HMFMessageDispatcher *_dispatcher;
    HMDCoreData *_persistence;
    id<HMFAsyncContext> _workContext;
    NSPersistentStore *_store;
    NSPersistentHistoryToken *_storeExemplarToken;
    HMDManagedObjectTransmuter *_transmuter;
}

@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)performSync;
- (void)interceptRemoteResidentRequest:(id)a0 proceed:(id /* block */)a1;
- (void)performResidentRequest:(id)a0 options:(unsigned long long)a1;
- (id)initWithHome:(id)a0 dispatcher:(id)a1 persistence:(id)a2;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)handleFetchHomeData:(id)a0;
- (void)handleHomeDataChanged:(id)a0;
- (void)handlePersistentStoreChanged:(id)a0;

@end
