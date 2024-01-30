@class NSString, PVFrameSet, PVLivePlayerCameraRenderLink;

@interface PVLivePlayerCameraSource : NSObject <PVLivePlayerSource> {
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_lock;
    PVFrameSet *_mostRecentFrameSet;
    PVLivePlayerCameraRenderLink *_renderLink;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMuted:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })itemTimeForHostTime:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)pause;
- (void)play;
- (void)dealloc;
- (void)cameraFrameSetRecieved:(id)a0;
- (void)cameraFrameSetDropped;
- (void)registerRenderLink:(id)a0;
- (id)imageBufferForHostTime:(double)a0;

@end
