@class NSURL, NSPersistentContainer, NSObject;
@protocol OS_os_log;

@interface CNContactMetadataPersistentStoreManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (readonly, nonatomic) NSURL *storeLocation;
@property (readonly, nonatomic) NSPersistentContainer *container;

+ (id)currentManagedObjectModel;
+ (id)defaultStoreLocation;
+ (id)createPersistentContainer;
+ (id)createModel;

- (id)persistentStoreCoordinator;
- (id)init;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (id)initWithStoreLocation:(id)a0;
- (BOOL)setupIfNeeded:(id *)a0;
- (BOOL)createStoreDirectoryIfNeeded:(id *)a0;
- (id)storeDescription;
- (BOOL)performWorkWithManagedObjectContext:(id /* block */)a0 error:(id *)a1;

@end
