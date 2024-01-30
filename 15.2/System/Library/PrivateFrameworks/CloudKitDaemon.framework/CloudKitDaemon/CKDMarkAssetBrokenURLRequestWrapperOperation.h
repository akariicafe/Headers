@class CKDMarkAssetBrokenURLRequest;

@interface CKDMarkAssetBrokenURLRequestWrapperOperation : CKDOperation

@property (retain, nonatomic) CKDMarkAssetBrokenURLRequest *urlRequest;

- (id)activityCreate;
- (int)operationType;
- (BOOL)shouldCheckAppVersion;
- (void)main;
- (void).cxx_destruct;

@end
