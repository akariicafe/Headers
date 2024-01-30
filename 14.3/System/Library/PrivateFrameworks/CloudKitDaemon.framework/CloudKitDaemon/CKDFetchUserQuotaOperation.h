@protocol CKFetchUserQuotaOperationCallbacks;

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long quotaAvailable;
@property (retain, nonatomic) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void)main;
- (int)operationType;

@end
