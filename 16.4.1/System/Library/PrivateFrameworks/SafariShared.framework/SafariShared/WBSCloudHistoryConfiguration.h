@class NSString;

@interface WBSCloudHistoryConfiguration : NSObject

@property (retain) NSString *singleDeviceSaveChangesThrottlingPolicyString;
@property (retain) NSString *multipleDeviceSaveChangesThrottlingPolicyString;
@property (retain) NSString *singleDeviceFetchChangesThrottlingPolicyString;
@property (retain) NSString *multipleDeviceFetchChangesThrottlingPolicyString;
@property (retain) NSString *syncCircleSizeRetrievalThrottlingPolicyString;
@property unsigned long long maximumRequestCharacterCount;
@property double syncWindow;
@property (readonly) BOOL shouldBatchSaveRecords;
@property (readonly) BOOL shouldUseLongLivedOperationsToSaveRecords;

- (void)_applyBuiltInConfiguration:(id)a0;
- (id)platformBuiltInConfiguration;
- (id)dictionaryRepresentation;
- (void)_applyConfiguration:(id)a0 withTolerance:(long long)a1;
- (id)_builtInConfiguration;
- (id)initWithDictionary:(id)a0;
- (id)_sharedBuiltInConfiguration;
- (id)init;
- (id)remoteConfiguration;
- (void)applyRemoteConfiguration:(id)a0;
- (void)applyPlatformConfiguration:(id)a0 withTolerance:(long long)a1;
- (void).cxx_destruct;

@end
