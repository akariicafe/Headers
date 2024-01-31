@class OS_os_workgroup, NSString;
@protocol PHASESessionInterface;

@interface ATPhasePlatform : NSObject <PHASEPlatform> {
    struct unique_ptr<Phase::ServerManager, std::default_delete<Phase::ServerManager>> { struct __compressed_pair<Phase::ServerManager *, std::default_delete<Phase::ServerManager>> { struct ServerManager *__value_; } __ptr_; } _serverManager;
    id _sessionInterface;
    id _roomCongruenceInterface;
}

@property (readonly, nonatomic) id tapInterface;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) unsigned int bufferFrameSize;
@property (readonly, nonatomic) id<PHASESessionInterface> sessionInterface;
@property (readonly, nonatomic) OS_os_workgroup *workgroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)start;
- (id).cxx_construct;
- (BOOL)stop;
- (void).cxx_destruct;
- (int)muteSessionInput:(unsigned int)a0 mute:(BOOL)a1 fadeTime:(float)a2;
- (void)activateSession:(unsigned int)a0 activate:(BOOL)a1;
- (BOOL)applyVolumeOnAllSessions;
- (BOOL)applyVolumeOnSession:(unsigned int)a0;
- (BOOL)applyVolumeOnVolumeCategory:(id)a0 mode:(id)a1 value:(float)a2;
- (unsigned int)deviceLatencyInFramesForDirection:(unsigned char)a0;
- (BOOL)enableIO:(BOOL)a0 direction:(unsigned char)a1;
- (int)fadeClientsInSession:(unsigned int)a0 activating:(BOOL)a1 fadeLevel:(float)a2 fadeTime:(float)a3;
- (void *)lazyInitServerManager;
- (id)lazyInitSessionInterface;
- (int)muteAudioSessionBidirectional:(unsigned int)a0 mute:(BOOL)a1 fadeTime:(float)a2;
- (unsigned int)numberOfStreamsForDirection:(unsigned char)a0;
- (void)refreshInputMuteOnAllSessions:(float)a0;
- (BOOL)registerIOBlock:(id /* block */)a0;
- (BOOL)registerOverloadNotification:(id /* block */)a0;
- (BOOL)registerRouteChangeNotification:(id /* block */)a0;
- (void)registerTapInterface:(id)a0;
- (id)streamInfoForIndex:(unsigned int)a0 direction:(unsigned char)a1;
- (float)volumeScalarMappedToHWCurve:(float)a0;

@end
