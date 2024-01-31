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
+ (SEL)daemonInvocationSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void).cxx_destruct;
- (void)handleWebSharingInitiationForRecordID:(id)a0 sharingKey:(id)a1 baseSharingToken:(id)a2 error:(id)a3;
- (void)handleWebSharingRevocationForRecordID:(id)a0 error:(id)a1;
- (id)initWithRecordIDsToWebShare:(id)a0 recordIDsToUnshare:(id)a1;

@end
