@class VSMobileAssetsManager, VSSiriServerConfiguration, NSLock, VSPreferencesInterface;

@interface VSDownloadService : NSObject

@property (retain, nonatomic) VSMobileAssetsManager *assetsManager;
@property (retain, nonatomic) VSSiriServerConfiguration *serverConfig;
@property (retain, nonatomic) VSPreferencesInterface *preferenceInterface;
@property (retain, nonatomic) NSLock *updateLock;
@property (readonly, nonatomic) unsigned long long type;

+ (void)removeInProgressDownloadVoiceKey:(id)a0;
+ (id)inProgressDownloadVoiceKeys;
+ (void)addInProgressDownloadVoiceKey:(id)a0;
+ (id)inProgressDownloadResourceKeys;
+ (id)downloadQueue;

- (void)updateVoiceIfNeeded:(id)a0;
- (void)updateVoicesAndVoiceResources;
- (void)updateVoiceResourcesWithPriorityForLanguages:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllResourceDownloads;
- (void)cancelDownloadForAssets:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (void)downloadNextInProgressDownloadResource;
- (void)updateTrialVoiceResourceWithLanguage:(id)a0;

@end
