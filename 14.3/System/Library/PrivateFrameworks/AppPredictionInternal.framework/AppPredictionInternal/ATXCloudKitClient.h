@class CKContainer, NSObject, CKDatabase;
@protocol OS_dispatch_queue;

@interface ATXCloudKitClient : NSObject

@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (id)clientWithContainerIdentifier:(id)a0 useManatee:(BOOL)a1 callbackQueue:(id)a2;

- (void).cxx_destruct;
- (void)saveRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchCurrentDeviceIDWithCompletionHandler:(id /* block */)a0;
- (void)fetchAccountInfoWithCompletionHandler:(id /* block */)a0;
- (void)deleteRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRecords:(id)a0 inZone:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithContainerIdentifier:(id)a0 useManatee:(BOOL)a1 callbackQueue:(id)a2;
- (id)initWithDatabase:(id)a0 inContainer:(id)a1 callbackQueue:(id)a2;
- (void)scheduleDatabaseOperation:(id)a0;

@end
