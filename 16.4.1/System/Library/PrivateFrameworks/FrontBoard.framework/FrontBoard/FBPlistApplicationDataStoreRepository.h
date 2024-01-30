@class NSString, NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue, FBApplicationDataStoreRepositoryDelegate;

@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {
    NSURL *_storeURL;
    NSMutableDictionary *_state;
    BOOL _dirty;
    unsigned long long _batchCount;
    int _autoFlushDuration;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property (weak, nonatomic) id<FBApplicationDataStoreRepositoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (id)objectForKey:(id)a0 forApplication:(id)a1;
- (BOOL)_isEligibleForSaving:(id)a0;
- (id)keysForApplication:(id)a0;
- (void)removeObjectForKey:(id)a0 forApplication:(id)a1;
- (void)removeObjectsForKeys:(id)a0 forApplication:(id)a1;
- (id)initWithStorePath:(id)a0;
- (void)dealloc;
- (BOOL)containsKey:(id)a0 forApplication:(id)a1;
- (id)applicationIdentifiersWithState;
- (void)close;
- (void)flushSynchronously;
- (id)allObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 forApplication:(id)a2;
- (void)beginBatchedUpdate;
- (void)removeAllObjectsForApplication:(id)a0;
- (void)endBatchedUpdate;
- (void)_load;
- (void).cxx_destruct;
- (id)location;
- (id)_stateQueue_storeForIdentifier:(id)a0;
- (void)_notifyDelegateOfChangeForKeys:(id)a0 application:(id)a1;
- (void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)a0;
- (id)_stateQueue_addStoreForIdentifierIfNecessary:(id)a0;
- (void)_stateQueue_markDirty;
- (id)_stateQueue_objectForKey:(id)a0 forIdentifier:(id)a1;
- (id)_stateQueue_objectsForKeys:(id)a0;
- (void)_stateQueue_removeStoreForIdentifier:(id)a0;
- (void)_writeQueue_flushSynchronously;

@end
