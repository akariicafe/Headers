@class NSError;

@interface IMCloudKitErrorProgressTest : IMCloudKitSyncProgressRuntimeTest

@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithErrorCode:(long long)a0;
- (void)willUpdateSyncState:(id)a0;

@end
