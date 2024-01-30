@class NSArray, NSMutableDictionary, CKModifyWebSharingOperationInfo, NSMutableArray;
@protocol CKModifyWebSharingOperationCallbacks;

@interface CKModifyWebSharingOperation : CKDatabaseOperation <CKModifyWebSharingOperationCallbacks>

@property (readonly, nonatomic) id<CKModifyWebSharingOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifyWebSharingOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *recordIDsToShare;
@property (retain, nonatomic) NSArray *recordIDsToUnshare;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (retain, nonatomic) NSMutableArray *sharedRecordIDs;
@property (retain, nonatomic) NSMutableArray *unsharedRecordIDs;
@property (copy, nonatomic) NSArray *recordIDsToShareReadWrite;
@property (copy, nonatomic) id /* block */ recordSharedBlock;
@property (copy, nonatomic) id /* block */ recordUnsharedBlock;
@property (copy, nonatomic) id /* block */ webShareRecordsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleWebSharingRevocationForRecordID:(id)a0 error:(id)a1;
- (void)handleWebSharingInitiationForRecordID:(id)a0 sharingKey:(id)a1 baseSharingToken:(id)a2 error:(id)a3;
- (id)initWithRecordIDsToWebShare:(id)a0 recordIDsToUnshare:(id)a1;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
