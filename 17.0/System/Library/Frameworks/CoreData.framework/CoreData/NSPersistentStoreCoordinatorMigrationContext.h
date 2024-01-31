@class NSString, NSDictionary, NSURL, NSPersistentStore, PFUbiquitySetupAssistant, NSStagedMigrationManager;

@interface NSPersistentStoreCoordinatorMigrationContext : NSObject

@property (readonly, nonatomic) NSURL *storeURL;
@property (readonly, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSString *configurationName;
@property (readonly, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL forceMigration;
@property (retain, nonatomic) NSPersistentStore *migratedStore;
@property (retain, nonatomic) NSStagedMigrationManager *stagedMigrationManager;
@property (retain, nonatomic) PFUbiquitySetupAssistant *ubiquitySetupAssistant;

- (void)dealloc;
- (id)initWithStoreURL:(id)a0 type:(id)a1 options:(id)a2;

@end
