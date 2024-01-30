@class NSString, NSTimer, NSNumber, ICCloudThrottlingPolicy;

@interface ICCloudConfiguration : NSObject

@property (retain, nonatomic) ICCloudThrottlingPolicy *throttlingPolicy;
@property (nonatomic) double syncInterval;
@property (nonatomic) BOOL shouldSyncWhenEnteringForeground;
@property (nonatomic) unsigned long long maxInlineAssetSizeBytes;
@property (retain, nonatomic) NSNumber *maximumAttachmentSizeMB;
@property (nonatomic) unsigned long long maxAttachmentsPerNote;
@property (nonatomic) unsigned long long maxSubAttachmentsPerAttachment;
@property (nonatomic) unsigned long long resultsLimitPerSyncOperation;
@property (retain, nonatomic) NSTimer *downloadTimer;
@property (nonatomic) BOOL shouldPerformTopHitSearch;
@property (nonatomic) unsigned long long mentionNotificationMaxRetries;
@property (nonatomic) unsigned long long launchTaskMaxRetries;
@property (nonatomic) unsigned long long serverSideUpdateTaskMaxFailureCount;
@property (nonatomic) unsigned long long durationForNextPasswordReask;
@property (nonatomic) unsigned long long unsupportedNoteDeviceCheckIntervalSeconds;
@property (copy, nonatomic) NSString *minimumClientVersion;

+ (id)defaultConfigurationURL;
+ (id)cachedConfigurationURL;
+ (BOOL)isConfigurationValid:(id)a0;
+ (id)sharedConfiguration;
+ (id)availableConfigurationURLs;
+ (void)setDefaultConfigurationURL:(id)a0;

- (void)downloadConfigurationFromRemoteURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadRemoteConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)loadLocalConfigurationFile;
- (void)dealloc;
- (void)loadConfigurationFromURL:(id)a0;
- (void)setConfigurationFromDictionary:(id)a0;

@end
