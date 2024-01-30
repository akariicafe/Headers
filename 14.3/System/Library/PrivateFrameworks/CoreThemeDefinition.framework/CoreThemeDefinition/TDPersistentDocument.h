@class NSString, NSManagedObjectModel, NSURL, NSManagedObjectContext;

@interface TDPersistentDocument : NSObject {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
}

@property (copy, nonatomic) NSURL *temporaryFileURL;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *fileType;

+ (id)_fileModificationDateForURL:(id)a0;

- (id)managedObjectModel;
- (id)managedObjectContext;
- (id)undoManager;
- (id)_persistentStoreCoordinator;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)a0 ofType:(id)a1 modelConfiguration:(id)a2 storeOptions:(id)a3 error:(id *)a4;
- (void)close;
- (void)dealloc;
- (void)setManagedObjectContext:(id)a0;
- (id)displayName;
- (id)persistentStoreTypeForFileType:(id)a0;
- (id)initWithType:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (BOOL)readFromURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)saveDocument:(id)a0;

@end
