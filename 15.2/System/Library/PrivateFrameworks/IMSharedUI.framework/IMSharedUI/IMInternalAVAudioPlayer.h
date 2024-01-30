@class AVAudioPlayer, NSString, AVPlayerItem, AVPlayer;
@protocol IMInternalAVAudioPlayerDelegate;

@interface IMInternalAVAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer *_avAudioPlayer;
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    long long _avPlayerState;
    BOOL _avPlayerPrepareRequested;
    BOOL _avPlayerPlayRequested;
}

@property (readonly, nonatomic) long long playerType;
@property (weak, nonatomic) id<IMInternalAVAudioPlayerDelegate> delegate;
@property (nonatomic) float volume;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly) double deviceCurrentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)playAtTime:(double)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)initWithContentsOfURL:(id)a0 playerType:(long long)a1;
- (void)_playerItemDidEndNotification:(id)a0;
- (void)_handleAVPlayerItemStateChange;
- (BOOL)_playAtTime:(double)a0;
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(BOOL)a0;
- (void)_notifyPlayerDidFinishSuccessfully:(BOOL)a0;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)prepareToPlay;
- (void)stop;

@end
