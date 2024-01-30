@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)containerIdentifier;
- (id)cloudKitContainer;
- (void).cxx_destruct;
- (id)init;
- (id)apsConnectionMachServiceName;
- (void)setupDatabase;
- (void)logMessage:(id)a0;
- (void)dealloc;
- (BOOL)saveIfPossible;
- (id)managedObjectModelName;
- (id)databaseFilePath;
- (void)storesWillChange:(id)a0;
- (void)contentDidUpdate:(id)a0;

@end
