@class HUComfortSound, NSString, HUComfortSoundsAssetManager, AVAudioSession, AVAudioEngine, AVAudioPlayerNode, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface HUComfortSoundsController : NSObject <HUComfortSoundsAssetManagerDelegate> {
    id /* block */ _mixingBlock;
    id /* block */ _duckingBlock;
    id /* block */ _rampUpBlock;
    id /* block */ _rampDownBlock;
    double _fadeDuration;
    double _duckDuration;
    double _changeDuration;
    double _stepsPerSecond;
    double _stepDuration;
}

@property (retain, nonatomic) AVAudioSession *session;
@property (retain, nonatomic) AVAudioEngine *engine;
@property (retain, nonatomic) AVAudioPlayerNode *audioPlayerNodeA;
@property (retain, nonatomic) AVAudioPlayerNode *audioPlayerNodeB;
@property (retain, nonatomic) AVAudioPlayerNode *currentNode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (retain, nonatomic) NSString *routeUID;
@property (nonatomic) BOOL holdingForCall;
@property (nonatomic) BOOL temporaryAirpodsDisconnect;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) HUComfortSound *selectedSound;
@property (retain, nonatomic) HUComfortSoundsAssetManager *assetManager;
@property (nonatomic) double outputGain;
@property (nonatomic) BOOL crossFading;
@property (nonatomic) BOOL changingSounds;
@property (nonatomic) BOOL changePending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)mediaServerDied;
- (void)registerNotifications;
- (BOOL)isPlaying;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)play;
- (void)scheduleNewFile;
- (void)updateAnalytics;
- (void)activeUseDidChange:(id)a0;
- (void)assetDownloadDidUpdate;
- (void)audioSessionWasInterrupted:(id)a0;
- (void)availableAssetsDidUpdate;
- (void)callStatusDidChange:(id)a0;
- (void)clearActiveRoute;
- (BOOL)currentRouteSupported;
- (BOOL)hasCurrentCall;
- (BOOL)isPlayingOnQueue;
- (void)mediaPlaybackDidChange:(id)a0;
- (id)nextFileToPlay;
- (void)playOnQueue;
- (id)processComfortSoundsAssetRequest:(id)a0;
- (void)rampNodeVolume:(id)a0 from:(double)a1 to:(double)a2 fadeDuration:(double)a3;
- (void)rampNodeVolume:(id)a0 from:(double)a1 to:(double)a2 fadeDuration:(double)a3 withProgress:(double)a4;
- (void)rampOutputGainFrom:(double)a0 to:(double)a1 withProgress:(double)a2;
- (void)routesDidChange:(id)a0;
- (void)scheduleFile;
- (void)setVolume:(double)a0 forNode:(id)a1 andRamp:(BOOL)a2;
- (void)setupEngine;
- (BOOL)shouldContinuePlayback;
- (void)stopAndClearRoute:(BOOL)a0;
- (void)stopOnQueueAndClearRoute:(BOOL)a0;
- (void)systemLogoutStatusDidChange:(id)a0;
- (void)updateVolumeForSessionAndRamp:(BOOL)a0;

@end
