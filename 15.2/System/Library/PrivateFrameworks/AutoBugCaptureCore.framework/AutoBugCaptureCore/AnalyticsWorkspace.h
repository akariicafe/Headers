@class NSXPCConnection, NSString, NSBundle, NSManagedObjectModel, NSError, NSPersistentStoreCoordinator, NSManagedObjectContext;
@protocol AnalyticsWorkspaceHealthDelegate;

@interface AnalyticsWorkspace : NSObject <NSCopying> {
    NSString *backingStore;
    BOOL readOnly;
    BOOL pathKnownToFail;
    NSString *storeKind;
    NSString *storeProt;
}

@property (retain, nonatomic) NSError *persistentStoreError;
@property (readonly, nonatomic) BOOL persistent;
@property (retain, nonatomic) id<AnalyticsWorkspaceHealthDelegate> healthDelegate;
@property (nonatomic) BOOL forceIntegrityCheck;
@property (nonatomic) BOOL forceDestroyPersistentStore;
@property (nonatomic) BOOL forceDeleteFile;
@property (retain, nonatomic) NSString *objectModelName;
@property (retain, nonatomic) NSBundle *objectModelResidentBundle;
@property (readonly, nonatomic) BOOL integrityCheckFailed;
@property (readonly, retain, nonatomic) NSManagedObjectModel *objectModel;
@property (readonly, retain, nonatomic) NSManagedObjectContext *mainObjectContext;
@property (readonly, retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ resetCompletionBlock;

+ (void)initialize;
+ (id)defaultWorkspace;
+ (id)workspaceWithName:(id)a0 atPath:(id)a1 objectModelName:(id)a2 objectModelBundle:(id)a3 useReadOnly:(BOOL)a4;
+ (id)workspaceWithName:(id)a0 atPath:(id)a1 useReadOnly:(BOOL)a2;

- (BOOL)save;
- (id)initWorkspaceWithName:(id)a0 atPath:(id)a1 useReadOnly:(BOOL)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWorkspaceWithService:(id)a0;
- (void)dealloc;
- (void)reset;
- (id)_initWithName:(id)a0 inMemory:(BOOL)a1 useReadOnly:(BOOL)a2 customModelName:(id)a3 loadModelFromBundle:(id)a4;
- (id)initWorkspaceWithName:(id)a0 atPath:(id)a1 objectModelName:(id)a2 objectModelBundle:(id)a3 useReadOnly:(BOOL)a4;
- (BOOL)_primePath:(id)a0;
- (id)createNewContext;
- (id)_cloneInternal:(id)a0 intoWorkspace:(id)a1 ancestry:(id)a2 iteration:(unsigned long long)a3 mustFail:(BOOL *)a4;
- (id)initInMemoryWorkspaceWithName:(id)a0 customModelName:(id)a1 objectModelBundle:(id)a2;
- (BOOL)setCustomPersistenceProperties:(id)a0;
- (BOOL)canCloneObjectsOfType:(id)a0;
- (void)enumerateResidentObjectsOfType:(id)a0 usingBlock:(id /* block */)a1;
- (id)cloneObject:(id)a0 intoWorkspace:(id)a1;

@end
