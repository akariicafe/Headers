@class NSPersistentContainer, NSString;
@protocol AVTUILogger, AVTAvatarsDaemon;

@interface _AVTCoreDataPersistentStoreRemoteConfiguration : NSObject <AVTCoreDataPersistentStoreConfiguration>

@property (readonly, nonatomic) NSPersistentContainer *container;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) id<AVTAvatarsDaemon> daemonClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createContainerForRemoteConfiguration;

- (id)createManagedObjectContext;
- (id)storeDescription;
- (void).cxx_destruct;
- (id)persistentStoreCoordinator;
- (BOOL)setupIfNeeded:(id *)a0;
- (id)initWithDaemonClient:(id)a0 environment:(id)a1;

@end
