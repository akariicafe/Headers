@class NSString, AVQueuePlayer, AVAudioSession, AVPlayerLooper, AVPlayerItem;

@interface SHSAudioPlayback : NSObject

@property (retain, nonatomic) NSString *ringtoneIdentifier;
@property (retain, nonatomic) AVAudioSession *_audioSession;
@property (retain, nonatomic) AVQueuePlayer *_queuePlayer;
@property (retain, nonatomic) AVPlayerLooper *_playerLooper;
@property (retain, nonatomic) AVPlayerItem *_currentItem;
@property (retain, nonatomic) id _serverConnectionDiedToken;

- (void)stopPlayback;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAudioSessionCategory;
- (void)playRingtoneWithIdentifier:(id)a0 loop:(BOOL)a1;
- (BOOL)isPlayingRingtone;
- (void)stopRingtoneWithFadeOut:(float)a0;

@end
