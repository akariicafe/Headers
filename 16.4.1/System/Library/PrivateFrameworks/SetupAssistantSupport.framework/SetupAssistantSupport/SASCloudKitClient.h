@class CKContainer, NSObject, CKDatabase;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SASCloudKitClient : NSObject

@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 inContainer:(id)a1 callbackQueue:(id)a2;
- (void)_scheduleDatabaseOperation:(id)a0;
- (void)fetchCurrentDeviceIDWithCompletion:(id /* block */)a0;
- (void)fetchRecordZone:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)fetchRecords:(id)a0 inZone:(id)a1 group:(id)a2 completion:(id /* block */)a3;
- (id)initWithContainerIdentifier:(id)a0 callbackQueue:(id)a1;
- (void)saveRecord:(id)a0 group:(id)a1 completion:(id /* block */)a2;
- (void)saveRecordZone:(id)a0 group:(id)a1 completion:(id /* block */)a2;

@end
