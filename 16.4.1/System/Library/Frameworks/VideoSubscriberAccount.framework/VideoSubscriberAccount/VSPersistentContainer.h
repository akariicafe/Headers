@class NSManagedObjectContext, NSPersistentContainer;

@interface VSPersistentContainer : NSObject

@property (retain, nonatomic) NSManagedObjectContext *viewContext;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) long long modelVersion;

+ (id)legacyDirectoryURL;
+ (id)directoryURL;

- (id)insertDeveloperIdentityProviderInContext:(id)a0;
- (id)developerIdentityProviderFetchRequest;
- (void)performBlock:(id /* block */)a0;
- (id)initWithModelVersion:(long long)a0;
- (id)init;
- (void)migrateContainerIfNecessary;
- (void).cxx_destruct;

@end
