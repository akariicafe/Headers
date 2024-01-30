@class PVLivePlayer;

@interface PVLivePlayerRenderLink : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastTime;
    unsigned int _throttledFPS;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_lock;
    PVLivePlayer *_player;
}

- (void)dealloc;
- (void)teardown;
- (id)init;
- (void).cxx_destruct;
- (void)rebuild;
- (unsigned int)_throttledRenderLinkFPS_NoLock;
- (void)registerWithPlayer:(id)a0;
- (BOOL)setThrottledFPS:(unsigned int)a0;
- (void)signalDroppedRenderLink;
- (void)signalPlayer:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)skipThrottledRenderLinkTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned int)thermalPolicyThrottledFPS;
- (unsigned int)throttledFPS;

@end
