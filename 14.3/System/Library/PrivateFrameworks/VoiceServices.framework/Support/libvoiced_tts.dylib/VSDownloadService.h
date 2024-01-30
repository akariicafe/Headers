@class VSSiriServerConfiguration, VSMobileAssetsManager, VSPreferencesInterface;

@interface VSDownloadService : NSObject

@property (retain, nonatomic) VSMobileAssetsManager *mobileAssetManager;
@property (retain, nonatomic) VSSiriServerConfiguration *serverConfig;
@property (retain, nonatomic) VSPreferencesInterface *preferenceInterface;
@property (readonly, nonatomic) unsigned long long type;

+ (id)inProgressDownloadResourceKeys;
+ (void)removeInProgressDownloadVoiceKey:(id)a0;
+ (id)downloadQueue;
+ (void)addInProgressDownloadVoiceKey:(id)a0;
+ (id)inProgressDownloadVoiceKeys;

- (void)cancelAllResourceDownloads;
- (void).cxx_destruct;
- (void)updateVoicesAndVoiceResources;
- (void)updateVoiceResourcesWithPriorityForLanguages:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (void)cancelDownloadForAssets:(id)a0;
- (void)updateVoiceIfNeeded:(id)a0;
- (void)downloadNextInProgressDownloadResource;

@end
