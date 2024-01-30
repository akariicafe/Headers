@interface HDCloudSyncValidateSubscriptionsOperation : HDCloudSyncOperation

@property (nonatomic) BOOL includeSecondaryContainers;

- (void)main;
- (id)_subcriptionsToValidate;
- (id)_registerOperationForSubscriptions:(id)a0 container:(id)a1;

@end
