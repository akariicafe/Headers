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

- (id)init;
- (void).cxx_destruct;
- (void)applyRemoteConfiguration:(id)a0;
- (id)dictionaryRepresentation;
- (id)_builtInConfiguration;
- (void)_applyBuiltInConfiguration:(id)a0;
- (id)remoteConfiguration;
- (void)_applyConfiguration:(id)a0 withTolerance:(long long)a1;
- (id)_sharedBuiltInConfiguration;
- (id)platformBuiltInConfiguration;
- (void)applyPlatformConfiguration:(id)a0 withTolerance:(long long)a1;
- (id)initWithDictionary:(id)a0;

@end
