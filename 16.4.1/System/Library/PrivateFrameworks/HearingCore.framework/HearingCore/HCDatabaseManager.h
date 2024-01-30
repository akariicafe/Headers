@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)containerIdentifier;
- (void)logMessage:(id)a0;
- (id)apsConnectionMachServiceName;
- (id)cloudKitContainer;
- (void)dealloc;
- (id)init;
- (void)setupDatabase;
- (id)databaseFilePath;
- (void).cxx_destruct;
- (id)managedObjectModelName;
- (void)contentDidUpdate:(id)a0;
- (BOOL)saveIfPossible;
- (void)storesWillChange:(id)a0;

@end
