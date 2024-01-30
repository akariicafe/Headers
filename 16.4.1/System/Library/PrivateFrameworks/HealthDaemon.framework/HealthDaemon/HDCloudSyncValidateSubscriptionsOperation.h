@interface HDCloudSyncValidateSubscriptionsOperation : HDCloudSyncOperation

@property (nonatomic) BOOL includeSecondaryContainers;

+ (BOOL)shouldLogAtOperationStart;

- (void)main;

@end
