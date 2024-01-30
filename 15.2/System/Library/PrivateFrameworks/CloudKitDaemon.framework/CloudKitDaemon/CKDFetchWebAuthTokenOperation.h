@class NSString;
@protocol CKFetchWebAuthTokenOperationCallbacks;

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation

@property (copy, nonatomic) NSString *webAuthToken;
@property (copy, nonatomic) NSString *APIToken;
@property (retain, nonatomic) id<CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;

@end
