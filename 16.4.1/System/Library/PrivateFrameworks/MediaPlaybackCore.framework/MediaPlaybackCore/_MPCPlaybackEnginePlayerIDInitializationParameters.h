@class NSString, MPNowPlayingInfoCenter, AVAudioSession, MPRemoteCommandCenter;

@interface _MPCPlaybackEnginePlayerIDInitializationParameters : NSObject <MPCPlaybackEngineInitializationParameters>

@property (readonly, nonatomic) MPNowPlayingInfoCenter *nowPlayingInfoCenter;
@property (readonly, nonatomic) MPRemoteCommandCenter *remoteCommandCenter;
@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayerID:(id)a0;
- (void).cxx_destruct;

@end
