@class CKContainer, NSObject, CKDatabase;
@protocol OS_xpc_object;

@interface WFCloudKitItemRequest : NSObject

@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKDatabase *database;
@property (nonatomic) BOOL performExpensiveFetchOperations;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity;

+ (void)hydrateItem:(id)a0 withRecord:(id)a1 setNilValues:(BOOL)a2;
+ (id)createRecordFromItem:(id)a0 zoneID:(id)a1;
+ (void)hydrateItem:(id)a0 withRecord:(id)a1 resolvedReferences:(id)a2 setNilValues:(BOOL)a3;
+ (id)desiredKeysFromProperties:(id)a0 itemType:(Class)a1;
+ (void)assignRecordValue:(id)a0 toItem:(id)a1 withProperty:(id)a2 resolvedReferences:(id)a3;
+ (id)createRecordIDWithName:(id)a0 zoneID:(id)a1;
+ (id)itemValueForRecordValue:(id)a0 item:(id)a1 property:(id)a2 resolvedReferences:(id)a3;
+ (id)recordValueForItemValue:(id)a0 item:(id)a1 property:(id)a2 recordKey:(id)a3 zoneID:(id)a4;

- (void).cxx_destruct;
- (id)fetchItemWithID:(id)a0 itemType:(Class)a1 groupName:(id)a2 properties:(id)a3 completionHandler:(id /* block */)a4;
- (id)updateItems:(id)a0 setNilValues:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithContainer:(id)a0 database:(id)a1;
- (id)fetchConfigurationAssetWithType:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
- (id)fetchConfigurationAssetWithType:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchItemsWithPredicate:(id)a0 itemType:(Class)a1 groupName:(id)a2 properties:(id)a3 completionHandler:(id /* block */)a4;
- (id)fetchItemsWithPredicate:(id)a0 itemType:(Class)a1 groupName:(id)a2 properties:(id)a3 sortDescriptors:(id)a4 resultsLimit:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (id)updateItems:(id)a0 setNilValues:(BOOL)a1 qualityOfService:(long long)a2 timeoutIntervalForRequest:(double)a3 completionHandler:(id /* block */)a4;
- (id)deleteItem:(id)a0 completionHandler:(id /* block */)a1;
- (id)createTaskCancelledError;
- (id)fetchRecordIDs:(id)a0 desiredKeys:(id)a1 operationGroup:(id)a2 completionHandler:(id /* block */)a3;

@end
