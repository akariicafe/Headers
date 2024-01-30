@class RCFoldersFetchedResultsController, NSString;

@interface __RCFolderContentsDelegate : NSObject <NSFetchedResultsControllerDelegate>

@property (nonatomic) RCFoldersFetchedResultsController *foldersController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerWillChangeContent:(id)a0;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)controllerDidChangeContent:(id)a0;

@end
