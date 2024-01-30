@class EDReadLaterCloudStorage, EDPersistenceDatabase, EDPersistenceHookRegistry;

@interface EDReadLaterPersistence : NSObject <EDPersistenceDatabaseSchemaProvider, EDReadLaterProvider, EDReadLaterCloudStorageDateProvider>

@property (retain, nonatomic) EDPersistenceDatabase *database;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic) EDReadLaterCloudStorage *cloudStorage;
@property (readonly, nonatomic) BOOL hasReadLaterMessages;

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (id)initWithDatabase:(id)a0 hookRegistry:(id)a1;
- (id)cloudStorageReadLaterDateForMessage:(id)a0;
- (void)scheduleRecurringActivity;
- (void).cxx_destruct;
- (void)_persistReadLater:(id)a0 date:(id)a1;
- (void)_removeReadLater:(id)a0;
- (void)_resetDisplayDateForMessage:(id)a0 connection:(id)a1;
- (void)persistReadLaterForMessage:(id)a0 date:(id)a1;
- (void)removeReadLaterForMessage:(id)a0;

@end
