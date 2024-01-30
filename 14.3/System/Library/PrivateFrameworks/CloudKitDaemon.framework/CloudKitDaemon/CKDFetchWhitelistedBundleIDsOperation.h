@class NSArray;
@protocol CKFetchWhitelistedBundleIDsOperationCallbacks;

@interface CKDFetchWhitelistedBundleIDsOperation : CKDOperation

@property (copy, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) id<CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (void)main;
- (int)operationType;

@end
