@class CKModifyBadgeOperationInfo;

@interface CKModifyBadgeOperation : CKOperation

@property (readonly, nonatomic) CKModifyBadgeOperationInfo *operationInfo;
@property (nonatomic) unsigned long long badgeValue;
@property (copy, nonatomic) id /* block */ modifyBadgeCompletionBlock;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithBadgeValue:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
