@class NSArray, TRIClient, NSObject, NSLock;
@protocol TRINotificationToken, OS_dispatch_queue;

@interface VSTrialService : NSObject

@property (class, readonly, nonatomic) VSTrialService *sharedService;

@property (retain, nonatomic) TRIClient *triClient;
@property (retain, nonatomic) NSArray *cachedVoices;
@property (retain, nonatomic) NSArray *cachedResources;
@property (retain, nonatomic) id<TRINotificationToken> trialNotificationToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSLock *clientRefreshLock;

+ (id)defaultDownloadOptions;
+ (id)versionFactorNameWithFactorName:(id)a0;

- (void)removeVoiceResource:(id)a0 completion:(id /* block */)a1;
- (id)definedVoicesWithLanguage:(id)a0 name:(id)a1 type:(long long)a2 footprint:(long long)a3;
- (void)refreshTrialClient;
- (void)downloadNamespaceImmediatelyIfNeededWithOption:(id)a0 completion:(id /* block */)a1;
- (void)downloadVoice:(id)a0 withOptions:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)_fileOfFactorName:(id)a0;
- (id)definedVoiceResourcesWithLanguage:(id)a0;
- (void)_removeAssetWithFactorName:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_downloadFactorName:(id)a0 withOptions:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)init;
- (id)selectVoiceResourceWithLanguage:(id)a0;
- (void)downloadVoiceResource:(id)a0 withOptions:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (id)selectVoiceWithLanguage:(id)a0 name:(id)a1 type:(long long)a2 footprint:(long long)a3;
- (void)removeVoice:(id)a0 completion:(id /* block */)a1;
- (id)_directoryOfFactorName:(id)a0;

@end
