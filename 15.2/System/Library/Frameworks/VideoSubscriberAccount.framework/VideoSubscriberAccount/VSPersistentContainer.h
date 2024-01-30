@class NSManagedObjectContext, NSPersistentContainer;

@interface VSPersistentContainer : NSObject

@property (retain, nonatomic) NSManagedObjectContext *viewContext;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) long long modelVersion;

+ (id)directoryURL;
+ (id)legacyDirectoryURL;

- (id)initWithModelVersion:(long long)a0;
- (void)performBlock:(id /* block */)a0;
- (id)developerIdentityProviderFetchRequest;
- (void).cxx_destruct;
- (id)init;
- (void)migrateContainerIfNecessary;
- (id)insertDeveloperIdentityProviderInContext:(id)a0;

@end
