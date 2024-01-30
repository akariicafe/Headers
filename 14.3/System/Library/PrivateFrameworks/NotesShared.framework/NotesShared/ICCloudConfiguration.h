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
@property (copy, nonatomic) NSString *minimumClientVersion;

+ (void)setDefaultConfigurationURL:(id)a0;
+ (id)sharedConfiguration;
+ (BOOL)isConfigurationValid:(id)a0;
+ (id)cachedConfigurationURL;
+ (id)defaultConfigurationURL;
+ (id)availableConfigurationURLs;

- (void)setConfigurationFromDictionary:(id)a0;
- (void)loadLocalConfigurationFile;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)downloadConfigurationFromRemoteURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadRemoteConfiguration:(id)a0;
- (void)loadConfigurationFromURL:(id)a0;

@end
