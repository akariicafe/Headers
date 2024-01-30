@class LPAudio, NSString, AVPlayerItem, NSHashTable, AVPlayer;

@interface LPStreamingAudioPlayer : NSObject <LPMediaPlayer> {
    LPAudio *_audio;
    AVPlayerItem *_item;
    AVPlayer *_player;
    id _timeObserver;
    id _endObserver;
    NSHashTable *_clients;
}

@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) unsigned long long state;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (readonly, nonatomic) BOOL usesSharedAudioSession;
@property (readonly, nonatomic) BOOL shouldUnmuteWhenUserAdjustsVolume;
@property (readonly, nonatomic) unsigned long long lastInteractionTimestamp;
@property (readonly, nonatomic) double unobscuredAreaFraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerWithAudio:(id)a0;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)transitionToState:(unsigned long long)a0;
- (void)play;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithAudio:(id)a0;
- (void)dispatchDidChangeProgressToAllClients:(float)a0;
- (void)dispatchDidFailToPlayToAllClients;
- (void)dispatchDidTransitionToStateToAllClients:(unsigned long long)a0;

@end
