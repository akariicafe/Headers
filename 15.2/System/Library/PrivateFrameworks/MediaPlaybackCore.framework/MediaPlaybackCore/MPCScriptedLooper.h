@class MPNotificationObserver, NSError, MPCSceneCollection, AVPlayer;

@interface MPCScriptedLooper : NSObject

@property (class, nonatomic, getter=isScriptedLoopingDisabled) BOOL scriptedLoopingDisabled;

@property (nonatomic) long long status;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ pauseFinishedBlock;
@property (retain, nonatomic) MPCSceneCollection *sceneCollection;
@property (retain, nonatomic) id timeObserver;
@property (retain, nonatomic) MPNotificationObserver *itemDidPlayToEndObserver;
@property (nonatomic) long long currentSceneIndex;
@property (nonatomic) long long currentLoopCount;
@property (nonatomic, getter=isExecutingPauseScene) BOOL executingPauseScene;
@property (nonatomic, getter=isSceneExecutionPaused) BOOL sceneExecutionPaused;
@property (readonly, nonatomic) AVPlayer *player;

- (id)initWithAsset:(id)a0;
- (void)_advanceScene;
- (id)currentScene;
- (void)_executeSceneCollection;
- (id)initWithAsset:(id)a0 sceneCollection:(id)a1;
- (void)_sharedInitWithItem:(id)a0;
- (void)_createSceneCollectionForAssetWithPreloadedKeys:(id)a0;
- (void)restartScenes;
- (void)pauseScenes;
- (void).cxx_destruct;
- (void)_updateRateIfNeeded;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_CMTimeForFrame:(long long)a0;
- (void)_executeCurrentScene;
- (void)seekToFrameIfNeeded:(long long)a0 completionHandler:(id /* block */)a1;
- (void)playScenes;
- (void)_pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithURL:(id)a0 sceneCollection:(id)a1;
- (void)_loopIfNeeded;
- (long long)frameForCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
