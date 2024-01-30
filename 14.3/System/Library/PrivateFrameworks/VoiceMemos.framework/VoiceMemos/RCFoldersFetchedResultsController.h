@class NSHashTable, NSString, NSArray, NSManagedObjectContext, __RCFolderContentsDelegate, NSMutableDictionary, NSDictionary, NSFetchedResultsController, NSDiffableDataSourceSnapshot, NSMutableArray;

@interface RCFoldersFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate> {
    NSManagedObjectContext *_context;
    NSFetchedResultsController *_userFoldersController;
    NSDictionary *_builtInContentControllers;
    NSMutableDictionary *_userContentControllers;
    NSMutableArray *_pendingUpdates;
    __RCFolderContentsDelegate *_folderContentsDelegate;
    NSArray *_allBuiltinFolders;
    NSArray *_builtinFolders;
    NSHashTable *_observers;
    BOOL _hasPerformedUserControllerFetch;
}

@property (class, readonly) NSString *builtinFoldersSectionIdentifier;
@property (class, readonly) NSString *userFoldersSectionIdentifier;

@property (readonly) NSMutableDictionary *userContentControllers;
@property (readonly) NSMutableDictionary *builtInContentControllers;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (readonly, nonatomic) NSArray *allBuiltinFolders;
@property (readonly, nonatomic) NSArray *builtinFolders;
@property (readonly, nonatomic) NSArray *userFolders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexPathForFolder:(id)a0;
- (unsigned long long)playableCountForFolder:(id)a0;
- (void).cxx_destruct;
- (id)folderWithIdentifier:(id)a0;
- (void)removeContentObserver:(id)a0;
- (id)_contentControllerForId:(id)a0;
- (void)reloadBuiltinFolder:(id)a0;
- (void)addContentObserver:(id)a0;
- (id)initWithFetchRequest:(id)a0 managedObjectContext:(id)a1;
- (id)folderAtIndexPath:(id)a0;
- (void)reloadUserFolder:(id)a0;
- (id)playableRecordingsInFolder:(id)a0;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)controllerDidChangeContent:(id)a0;

@end
