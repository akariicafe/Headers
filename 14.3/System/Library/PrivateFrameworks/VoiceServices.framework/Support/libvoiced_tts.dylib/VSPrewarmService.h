@class NSObject, VSSpeechEngine, VSVoiceResourceAsset;
@protocol OS_dispatch_queue;

@interface VSPrewarmService : NSObject

@property (retain, nonatomic) VSSpeechEngine *cachedEngine;
@property (retain, nonatomic) VSVoiceResourceAsset *loadedResources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prewarmQueue;

+ (id)sharedService;

- (id)init;
- (void).cxx_destruct;
- (void)prewarmWithRequest:(id)a0;
- (id)cachedEngineForVoice:(id)a0 resources:(id)a1;
- (id)loadEngineForVoice:(id)a0 resources:(id)a1;
- (void)handleVoiceSelectionPurge:(id)a0;
- (void)unloadEngine;
- (id)_cachedEngineForVoice:(id)a0 resources:(id)a1;
- (id)_engineForVoice:(id)a0 resources:(id)a1;
- (void)_loadVoiceResources:(id)a0 forEngine:(id)a1;
- (void)waitUntilPrewarmFinish;

@end
