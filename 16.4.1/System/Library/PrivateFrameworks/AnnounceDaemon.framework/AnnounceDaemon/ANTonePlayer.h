@class NSUUID, AVPlayerItem, AVAudioSession, NSObject, AVPlayer;
@protocol OS_os_log;

@interface ANTonePlayer : NSObject

@property (nonatomic) unsigned int proxyAudioSessionID;
@property (readonly, nonatomic) NSUUID *endpointUUID;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (nonatomic) BOOL usingProxyAudioSession;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)_activateAudioSessionForPlayer:(id)a0 error:(id *)a1;
- (void)_callHandler:(id)a0;
- (void)_deactivateAudioSession;
- (void)_deregisterForNotificationsWithAudioSession:(id)a0;
- (void)_handleFailure;
- (void)_handlePlayerItemFailedToPlayToEnd:(id)a0;
- (void)_handlePlayerItemPlayedToEnd:(id)a0;
- (void)_playFileURL:(id)a0;
- (void)_playSystemSoundWithFileURL:(id)a0;
- (void)_registerForNotificationsWithAudioSession:(id)a0;
- (void)audioSessionInterruptionHandler:(id)a0;
- (id)initWithAudioSessionID:(unsigned int)a0 endpointUUID:(id)a1;
- (void)playFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)playerRateChangedHandler:(id)a0;

@end
