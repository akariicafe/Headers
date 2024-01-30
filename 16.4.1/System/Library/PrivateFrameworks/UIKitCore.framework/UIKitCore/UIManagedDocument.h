@class NSString, NSManagedObjectModel, NSDictionary, NSPersistentStoreCoordinator, NSManagedObjectContext;

@interface UIManagedDocument : UIDocument {
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSDictionary *_documentMetadata;
    struct __mdocFlags { unsigned char shouldWriteAdditionalContent : 1; unsigned int _reserved : 31; } _mdocFlags;
}

@property (class, readonly, nonatomic) NSString *persistentStoreName;

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (copy, nonatomic) NSDictionary *persistentStoreOptions;
@property (copy, nonatomic) NSString *modelConfiguration;

+ (void)initialize;
+ (id)additionalContentPathComponent;
+ (BOOL)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)a0;

- (id)initWithFileURL:(id)a0;
- (void)dealloc;
- (id)persistentStoreTypeForFileType:(id)a0;
- (BOOL)writeContents:(id)a0 andAttributes:(id)a1 safelyToURL:(id)a2 forSaveOperation:(long long)a3 error:(id *)a4;
- (BOOL)writeContents:(id)a0 toURL:(id)a1 forSaveOperation:(long long)a2 originalContentsURL:(id)a3 error:(id *)a4;
- (void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)a0 toSyncedURL:(id)a1;
- (void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)a0 toNonSyncedURL:(id)a1;
- (id)_readMetadataFromDocumentURL:(id)a0;
- (BOOL)_writeMetadataToDocumentURL:(id)a0;
- (id)additionalContentForURL:(id)a0 error:(id *)a1;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)a0 ofType:(id)a1 modelConfiguration:(id)a2 storeOptions:(id)a3 error:(id *)a4;
- (id)contentsForType:(id)a0 error:(id *)a1;
- (BOOL)readAdditionalContentFromURL:(id)a0 error:(id *)a1;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (void)revertToContentsOfURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)writeAdditionalContent:(id)a0 toURL:(id)a1 originalContentsURL:(id)a2 error:(id *)a3;

@end
