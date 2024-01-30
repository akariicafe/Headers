@class NSString, ATPhasePlatform;
@protocol PHASESessionVolumeInterface;

@interface PHASESessionInterfaceImpl : NSObject <PHASESessionInterface> {
    ATPhasePlatform *_phasePlatform;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _callbackMutex;
    id /* block */ _fadeSessionBlock;
    id /* block */ _activateSessionBlock;
    id _sessionVolumeImpl;
}

@property (readonly, nonatomic) id<PHASESessionVolumeInterface> sessionVolumeInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setClientStateOnSession:(unsigned int)a0 clientToken:(void *)a1 modes:(unsigned int)a2 state:(unsigned int)a3 outDuckingInfo:(struct AudioSessionDuckingInfo { BOOL x0; float x1; float x2; } *)a4;
- (void)activateSession:(unsigned int)a0 activate:(BOOL)a1;
- (int)fadeClientsInSession:(unsigned int)a0 activating:(BOOL)a1 fadeLevel:(float)a2 fadeTime:(float)a3;
- (id)initWithPhasePlatform:(id)a0;
- (id)lazyInitSessionVolumeInterface;
- (void)muteSession:(unsigned int)a0 mute:(BOOL)a1;
- (BOOL)registerActivateAudioSessionBlock:(id /* block */)a0;
- (BOOL)registerFadeClientsInAudioSessionBlock:(id /* block */)a0;
- (BOOL)setClientStateFromCallbackOnSession:(unsigned int)a0 clientToken:(void *)a1 modes:(unsigned int)a2 state:(unsigned int)a3 outDuckingInfo:(struct AudioSessionDuckingInfo { BOOL x0; float x1; float x2; } *)a4;
- (BOOL)setInputMuteStateFromCallbackOnSession:(unsigned int)a0 clientToken:(void *)a1 isMuted:(BOOL)a2;
- (BOOL)setInputMuteStateOnSession:(unsigned int)a0 clientToken:(void *)a1 isMuted:(BOOL)a2;

@end
