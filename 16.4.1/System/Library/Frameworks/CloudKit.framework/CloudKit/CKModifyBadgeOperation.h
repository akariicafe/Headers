@class CKModifyBadgeOperationInfo;

@interface CKModifyBadgeOperation : CKOperation

@property (readonly, nonatomic) CKModifyBadgeOperationInfo *operationInfo;
@property (nonatomic) unsigned long long badgeValue;
@property (copy, nonatomic) id /* block */ modifyBadgeCompletionBlock;

+ (SEL)daemonInvocationSelector;

- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)activityCreate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBadgeValue:(unsigned long long)a0;

@end
