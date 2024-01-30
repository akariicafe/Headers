@class AVAudioPlayer, AXAssetsService, AVSpeechSynthesizer, AVAudioSession, NSMutableDictionary, NSString;

@interface AXSpeechSettingsModelController : NSObject <TTSAXResourceManagerObserver>

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) AXAssetsService *assetsService;
@property (retain, nonatomic) AVAudioSession *audioSessionForSamplePlayback;
@property (retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer;
@property (retain, nonatomic) NSMutableDictionary *downloadProgessByVoiceID;
@property (copy, nonatomic) id /* block */ downloadProgressForVoiceIdCallback;
@property (copy, nonatomic) id /* block */ finishedDownloadingResourceCallback;
@property (copy, nonatomic) id /* block */ finishedDeletingResourceCallback;
@property (copy, nonatomic) id /* block */ resourceCacheDidReceiveUpdateCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)partitionVoiceFootprints:(id)a0 intoStandardVoices:(id)a1 andNoveltyVoices:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadProgressForVoiceId:(id)a0 progress:(float)a1 storageSize:(long long)a2 requiredDiskSpace:(BOOL)a3;
- (void)finishedDeletingResource:(id)a0;
- (void)finishedDownloadingResource:(id)a0 wasCancelled:(BOOL)a1;
- (void)resourceCacheDidReceiveUpdate;
- (void)deleteResource:(id)a0;
- (BOOL)allowedToDownload;
- (BOOL)hasAnyUserDeletableResources:(id)a0;
- (BOOL)isResourceUserDeletable:(id)a0;
- (void)playSampleForResource:(id)a0 completion:(id /* block */)a1;
- (void)refreshAssetCatalog:(BOOL)a0 downloadSamplesIfNeeded:(BOOL)a1 restartMigrationIfNeeded:(BOOL)a2;
- (id)selectedVoiceIdentifierForSpeechSource:(long long)a0;
- (id)selectedVoiceIdentifierForSpeechSource:(long long)a0 languageCode:(id)a1;
- (void)startDownloadForResource:(id)a0;
- (void)stopDownloadForResource:(id)a0;
- (void)updateSelectedVoiceIdentifier:(id)a0 forSpeechSource:(long long)a1;
- (void)updateSelectedVoiceIdentifier:(id)a0 forSpeechSource:(long long)a1 languageCode:(id)a2;

@end
