@interface CKDModifyBadgeOperation : CKDOperation

@property (readonly, nonatomic) unsigned long long badgeValue;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void)main;
- (int)operationType;

@end
