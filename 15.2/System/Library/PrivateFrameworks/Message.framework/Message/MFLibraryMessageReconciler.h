@class MFMailMessageLibrary, MFMailMessageLibraryQueryTransformer, EDPersistenceHookRegistry, EDPersistenceDatabase;
@protocol MFAccountsProvider;

@interface MFLibraryMessageReconciler : NSObject {
    EDPersistenceHookRegistry *_hookRegistry;
    EDPersistenceDatabase *_database;
    MFMailMessageLibrary *_library;
    id<MFAccountsProvider> _accountsProvider;
    MFMailMessageLibraryQueryTransformer *_transformer;
}

@property (readonly, nonatomic) unsigned long long numberOfUnreconciledMessages;

- (id)reconcileWithThreadReconciliationQueries:(id)a0 window:(id)a1;
- (void)reconcileAllObjectsWithWindow:(id)a0;
- (id)reconcileWithMessageReconciliationQueries:(id)a0 window:(id)a1;
- (void).cxx_destruct;
- (id)reconcileInboxMessagesWithWindow:(id)a0;
- (id)initWithLibrary:(id)a0 accountsProvider:(id)a1;

@end
