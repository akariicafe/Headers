@class NSUUID, AVPlayerItem, AVAudioSession, NSObject, AVPlayer;
@protocol OS_os_log;

@interface ANTonePlayer : NSObject

@property (readonly, nonatomic) NSUUID *endpointUUID;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)_deactivateAudioSession;
- (void)_callHandler:(id)a0;
- (id)initWithEndpointUUID:(id)a0;
- (void)_deregisterForNotificationsWithAudioSession:(id)a0;
- (void)_playSystemSoundWithFileURL:(id)a0;
- (BOOL)_activateAudioSessionForPlayer:(id)a0 error:(id *)a1;
- (void)_registerForNotificationsWithAudioSession:(id)a0;
- (void)audioSessionInterruptionHandler:(id)a0;
- (void)_handleFailure;
- (void)_handlePlayerItemPlayedToEnd:(id)a0;
- (void)_handlePlayerItemFailedToPlayToEnd:(id)a0;
- (void)playerRateChangedHandler:(id)a0;
- (void)playFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_playFileURL:(id)a0;

@end
