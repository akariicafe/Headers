@interface CKDModifyBadgeOperation : CKDOperation

@property (readonly, nonatomic) unsigned long long badgeValue;

+ (long long)isPredominatelyDownload;

- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;

@end
