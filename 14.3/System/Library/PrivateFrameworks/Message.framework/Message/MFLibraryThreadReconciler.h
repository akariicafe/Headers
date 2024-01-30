@class EDThreadPersistence, EDPersistenceHookRegistry, EDPersistenceDatabase, EDPersistence;

@interface MFLibraryThreadReconciler : NSObject {
    EDPersistenceHookRegistry *_hookRegistry;
    EDPersistence *_persistence;
    EDPersistenceDatabase *_database;
    EDThreadPersistence *_threadPersistence;
}

- (void).cxx_destruct;
- (void)reconcileAllObjectsWithWindow:(id)a0;
- (id)initWithHookRegistry:(id)a0 persistence:(id)a1;
- (void)reconcileWithThreadsWithConversationIDs:(id)a0 window:(id)a1;

@end
