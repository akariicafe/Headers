@class ANAudioSessionManager, NSString, AVAudioSession, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, ANTrackPlayerDelegate;

@interface ANTrackPlayer : NSObject <AVAudioPlayerDelegate>

@property unsigned long long playbackState;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property double interruptionStart;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) ANAudioSessionManager *audioSessionManager;
@property (nonatomic) BOOL readyToPlay;
@property (readonly, nonatomic) int numberActivePlayers;
@property (weak) id<ANTrackPlayerDelegate> delegate;
@property (weak) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *whatIsPlaying;
@property double silenceBetweenEachTrack;
@property (retain, nonatomic) NSURL *audioFileAtStart;
@property double trimStartTone;
@property (retain, nonatomic) NSURL *audioFileTransition;
@property double trimTransitionTone;
@property double previousSkipGoesToPreviousTrackDelta;
@property (readonly, nonatomic) NSMutableArray *players;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)machTimeToSeconds:(unsigned long long)a0;
+ (unsigned long long)secondsToMachTime:(double)a0;

- (void)end;
- (id)initWithOptions:(unsigned long long)a0;
- (void)_callDelegateWithBlock:(id /* block */)a0;
- (void)_registerForNotifications;
- (void)next;
- (void).cxx_destruct;
- (void)stop;
- (void)previous;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)playWithCompletionHandler:(id /* block */)a0;
- (id)prepareToPlay;
- (id)initWithOptions:(unsigned long long)a0 audioSession:(id)a1;
- (BOOL)playInternalSync;
- (void)stopInternalSync;
- (void)nextInternalSync;
- (void)previousInternalSync;
- (void)handleInterruptionDelay:(double)a0;
- (id)startNextPlaybackOnDidFinish:(id)a0;
- (double)_trackTrimTime:(long long)a0;
- (BOOL)addingNewPlayer:(id)a0;
- (BOOL)add:(id)a0 announcementID:(id)a1;
- (void)_configureSharedAudioSession;
- (BOOL)_insertAudioBetween;
- (BOOL)_add:(id)a0 announcementID:(id)a1 trackType:(long long)a2;
- (BOOL)_addURL:(id)a0 announcementID:(id)a1 trackType:(long long)a2;
- (BOOL)_playSync;
- (void)_stopSync;
- (void)audioSessionInterruptionHandler:(id)a0;
- (void)audioSessionMediaServicesLostHandler:(id)a0;
- (void)audioSessionMediaServicesResetHandler:(id)a0;
- (void)_resumePlaybackAfterInterruptionAtTimeInterval:(double)a0;
- (void)_deregisterForNotifications;

@end
