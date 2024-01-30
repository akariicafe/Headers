@class NSString, EDPersistenceDatabase, EDMessagePersistence;
@protocol EDMessageChangeHookResponder;

@interface EDDataDetectionPersistence : NSObject <EDPersistenceDatabaseProtectedSchemaProvider, EDMessageChangeHookResponder>

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, weak, nonatomic) id<EDMessageChangeHookResponder> hookResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protectedTablesAndForeignKeysToResolve:(id *)a0;
+ (id)_dataDetectionResultsTableSchemaWithName:(id)a0;

- (void).cxx_destruct;
- (BOOL)addDataDetectionResults:(id)a0 globalMessageID:(long long)a1;
- (id)getDataDetectionResultsForGlobalMessageID:(long long)a0;
- (id)initWithDatabase:(id)a0 messagePersistence:(id)a1 hookResponder:(id)a2;
- (BOOL)_addDataDetectionResults:(id)a0 withGlobalMessageID:(long long)a1 toTable:(id)a2 withConnection:(id)a3;
- (id)_getPersistedMessagesFromGlobalMessageID:(long long)a0;
- (BOOL)_hookResponderRespondsToRequiredMethods:(id)a0;
- (id)getDataDetectionResultRowIDsForGlobalMessageID:(long long)a0;

@end
