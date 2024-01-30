@class VSMobileAssetsManager, VSSiriServerConfiguration, NSLock, VSPreferencesInterface;

@interface VSDownloadService : NSObject

@property (retain, nonatomic) VSMobileAssetsManager *assetsManager;
@property (retain, nonatomic) VSSiriServerConfiguration *serverConfig;
@property (retain, nonatomic) VSPreferencesInterface *preferenceInterface;
@property (retain, nonatomic) NSLock *updateLock;
@property (readonly, nonatomic) unsigned long long type;

+ (id)downloadQueue;
+ (void)addInProgressDownloadVoiceKey:(id)a0;
+ (id)inProgressDownloadVoiceKeys;
+ (void)removeInProgressDownloadVoiceKey:(id)a0;
+ (void)triggerNeuralCompiling;

- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)cancelDownloadForAssets:(id)a0;
- (id)initWithType:(unsigned long long)a0 assetsManager:(id)a1;
- (void)updateTrialVoiceResourceWithLanguage:(id)a0;
- (void)updateVoiceIfNeeded:(id)a0;
- (void)updateVoicesAndVoiceResources;

@end
