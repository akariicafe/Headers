@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)containerIdentifier;
- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (void)dealloc;
- (id)apsConnectionMachServiceName;
- (void)setupDatabase;
- (id)cloudKitContainer;
- (BOOL)saveIfPossible;
- (id)managedObjectModelName;
- (id)databaseFilePath;
- (void)storesWillChange:(id)a0;
- (void)contentDidUpdate:(id)a0;

@end
