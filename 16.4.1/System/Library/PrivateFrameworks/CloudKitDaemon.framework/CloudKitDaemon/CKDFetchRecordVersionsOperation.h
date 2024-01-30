@class NSArray, NSString, CKDDecryptRecordsOperation, NSObject;
@protocol OS_dispatch_group, CKFetchRecordVersionsOperationCallbacks;

@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation {
    CKDDecryptRecordsOperation *_decryptOperation;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSString *minimumVersionETag;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchVersionsGroup;
@property (readonly, nonatomic) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (retain, nonatomic) id<CKFetchRecordVersionsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordVersionFetchedBlock;

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (int)operationType;
- (id)activityCreate;
- (id)relevantZoneIDs;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (BOOL)hasDecryptOperation;
- (void).cxx_destruct;
- (void)_handleRecordVersionsFetchedForID:(id)a0 isDeleted:(BOOL)a1 versions:(id)a2 responseCode:(id)a3;

@end
