@class NSSet, NSString, NSObject;
@protocol FBApplicationDataStoreRepositoryServerClientContextDelegate, FBSServiceFacilityClientHandle, FBApplicationDataStoreRepository, OS_dispatch_queue;

@interface FBApplicationDataStoreRepositoryServerClientContext : NSObject <FBSServiceFacilityClientContext> {
    id<FBApplicationDataStoreRepository> _dataStore;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _observingChanges;
}

@property (weak, nonatomic) id<FBApplicationDataStoreRepositoryServerClientContextDelegate> delegate;
@property (nonatomic) BOOL interestedInAllChanges;
@property (copy, nonatomic) NSSet *prefetchedKeys;
@property (weak, nonatomic) id<FBSServiceFacilityClientHandle> clientHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_repositoryInvalidated:(id)a0;
- (id)initWithDataStore:(id)a0;
- (void)dealloc;
- (void)_valueChanged:(id)a0;
- (void).cxx_destruct;
- (void)_queue_updateObservers;

@end
