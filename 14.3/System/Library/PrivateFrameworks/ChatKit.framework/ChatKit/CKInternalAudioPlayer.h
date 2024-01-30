@class AVAudioPlayer, NSString, AVPlayerItem, AVPlayer;
@protocol CKInternalAudioPlayerDelegate;

@interface CKInternalAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    AVAudioPlayer *_avAudioPlayer;
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    long long _avPlayerState;
    BOOL _avPlayerPrepareRequested;
    BOOL _avPlayerPlayRequested;
}

@property (readonly, nonatomic) long long playerType;
@property (weak, nonatomic) id<CKInternalAudioPlayerDelegate> delegate;
@property (nonatomic) float volume;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly) double deviceCurrentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (BOOL)_playAtTime:(double)a0;
- (BOOL)playAtTime:(double)a0;
- (id)initWithContentsOfURL:(id)a0 playerType:(long long)a1;
- (void)resetCurrentTime;
- (void)_playerItemDidEndNotification:(id)a0;
- (void)_handleAVPlayerItemStateChange;
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(BOOL)a0;
- (void)_notifyPlayerDidFinishSuccessfully:(BOOL)a0;
- (void)pause;
- (void)prepareToPlay;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
