@class EDThreadPersistence, EDPersistenceHookRegistry, EDPersistenceDatabase;

@interface MFLibraryThreadReconciler : NSObject {
    EDPersistenceHookRegistry *_hookRegistry;
    EDPersistenceDatabase *_database;
    EDThreadPersistence *_threadPersistence;
}

- (void)reconcileWithThreadsWithConversationIDs:(id)a0 window:(id)a1;
- (id)initWithHookRegistry:(id)a0 persistence:(id)a1;
- (void)reconcileAllObjectsWithWindow:(id)a0;
- (void).cxx_destruct;

@end
