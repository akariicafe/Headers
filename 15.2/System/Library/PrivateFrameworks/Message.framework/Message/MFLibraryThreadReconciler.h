@class EDThreadPersistence, EDPersistenceHookRegistry, EDPersistenceDatabase;

@interface MFLibraryThreadReconciler : NSObject {
    EDPersistenceHookRegistry *_hookRegistry;
    EDPersistenceDatabase *_database;
    EDThreadPersistence *_threadPersistence;
}

- (void)reconcileAllObjectsWithWindow:(id)a0;
- (void)reconcileWithThreadsWithConversationIDs:(id)a0 window:(id)a1;
- (void).cxx_destruct;
- (id)initWithHookRegistry:(id)a0 persistence:(id)a1;

@end
