@class NSPersistentStoreCoordinator, NoteContext, ICNoteContext, ICFolderCoreDataIndexer;

@interface ICUnifiedNoteContext : NSObject

@property (readonly, nonatomic) NSPersistentStoreCoordinator *modernStoreCoordinator;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *htmlStoreCoordinator;
@property (readonly, nonatomic) ICNoteContext *modernNoteContext;
@property (readonly, nonatomic) NoteContext *htmlNoteContext;
@property (readonly, nonatomic) ICFolderCoreDataIndexer *allFoldersIndexer;
@property (readonly, nonatomic) ICFolderCoreDataIndexer *normalFoldersIndexer;

- (void).cxx_destruct;
- (id)managedObjectIDForURIRepresentation:(id)a0;
- (id)initWithModernNoteContext:(id)a0 htmlNoteContext:(id)a1;
- (id)managedObjectContextForObject:(id)a0 error:(id *)a1;
- (id)managedObjectContextForObjectID:(id)a0;
- (id)managedObjectIDForURIString:(id)a0;

@end
