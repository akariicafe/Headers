@class AVAudioPlayer, NSString, CADisplayLink, NSURL, AVAudioSession, NSNumber;
@protocol HFAudioPlayerDelegate;

@interface HFAudioPlayer : NSObject <AVAudioPlayerDelegate>

@property (retain, nonatomic) NSURL *audioFileURL;
@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (nonatomic, getter=isAudioSessionActive) BOOL audioSessionIsActive;
@property (nonatomic) double playerCurrentTime;
@property (nonatomic) unsigned long long audioSessionOptions;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (weak, nonatomic) id<HFAudioPlayerDelegate> delegate;
@property (nonatomic) unsigned long long playerStopSource;
@property (retain, nonatomic) NSNumber *routeChangeReason;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) double duration;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (void).cxx_destruct;
- (void)pause;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void)play;
- (void)resume;
- (void)audioSessionMediaServicesWereLost:(id)a0;
- (void)dealloc;
- (void)audioSessionMediaServicesWereReset:(id)a0;
- (void)stop;
- (id)_audioSessionCategory;
- (unsigned long long)_audioSessionCategoryOptions;
- (void)_stopWithoutAudioSessionDeactivation;
- (void)audioSessionDidInterrupt:(id)a0;
- (void)audioSessionRouteChanged:(id)a0;
- (void)_deregisterAudioSessionObservers;
- (void)_deactivateAudioSession;
- (BOOL)_configureAudioSession:(id *)a0;
- (void)_registerAudioSessionObservers;
- (void)_displayLinkUpdated:(id)a0;
- (void)_pauseWithReason:(id)a0;
- (id)initWithAudioFileURL:(id)a0 audioSessionOptions:(unsigned long long)a1 delegate:(id)a2;
- (void)updateAudioFileURL:(id)a0;
- (BOOL)prepareToPlay:(id *)a0;

@end
