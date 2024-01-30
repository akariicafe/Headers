@class NSManagedObjectModel;

@interface MTDBConfig : NSObject <MTCoreDataContainerConfigProvider>

@property (retain, nonatomic) NSManagedObjectModel *model;

- (void).cxx_destruct;
- (id)managedObjectModel;
- (id)databaseFileUrl;
- (id)peristentStoreOptions;

@end
