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

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)activityCreate;
- (void).cxx_destruct;
- (void)handleWebSharingInitiationForRecordID:(id)a0 sharingKey:(id)a1 baseSharingToken:(id)a2 error:(id)a3;
- (void)handleWebSharingRevocationForRecordID:(id)a0 error:(id)a1;
- (id)initWithRecordIDsToWebShare:(id)a0 recordIDsToUnshare:(id)a1;

@end
