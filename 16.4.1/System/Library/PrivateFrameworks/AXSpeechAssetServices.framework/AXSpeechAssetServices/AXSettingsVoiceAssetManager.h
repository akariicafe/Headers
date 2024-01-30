@class NSString, NSPointerArray, AVSpeechSynthesizer;

@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate> {
    struct __SCNetworkReachability { } *_reachability;
    NSPointerArray *_delegates;
    AVSpeechSynthesizer *_samplePlayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void)addDelegate:(id)a0;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAssetManagedBySiriForVoiceId:(id)a0;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (BOOL)allowedToDownloadVoiceAssets;
- (id)mobileAssetWorkQueue;
- (id)_currentDelegates;
- (void)_updateAllowedToDownload;
- (id)mobileAssetDownloadQueue;
- (void)playSample:(id)a0 completion:(id /* block */)a1;

@end
