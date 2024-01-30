@class NSObject, AVAsset, NSString, AVQueuePlayer, AVPlayerLooper, NSArray, PVFrameSet;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PVLivePlayerAVAssetSource : NSObject <AVPlayerItemOutputPullDelegate, PVLivePlayerSource> {
    AVQueuePlayer *_playerQueue;
    AVPlayerLooper *_playerLooper;
    NSArray *_playerItemOutputs;
    int _currentPlayerItemOutput;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _currentPlayerItemRange;
    PVFrameSet *_cacheImageFrameSet;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_cacheLock;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _assetDuration;
    float _assetRate;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _videoTrackRange;
    float _videoTrackFrameRate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _videoTrackFrameDelta;
    struct { int width; int height; } _videoTrackDimensions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_semaphore> *_playbackReadyCondVar;
    NSObject<OS_dispatch_semaphore> *_outputReadyCondVar;
}

@property int status;
@property (nonatomic) BOOL loopPlayback;
@property (nonatomic) BOOL repeatFrames;
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)setMuted:(BOOL)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)play;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })itemTimeForHostTime:(double)a0;
- (void)outputMediaDataWillChange:(id)a0;
- (void)outputSequenceWasFlushed:(id)a0;
- (void)playerItemDidPlayToEnd:(id)a0;
- (void)playerItemPlaybackStalled:(id)a0;
- (void)playerItemTimeJumped:(id)a0;
- (id)initWithAVAsset:(id)a0;
- (struct __CVBuffer { } *)_copyPixelBufferForHostTime:(double)a0;
- (struct __CVBuffer { } *)_copyPixelBufferForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)finishReading;
- (id)imageBufferForHostTime:(double)a0;
- (void)playerItemFailedToPlayToEnd:(id)a0;
- (void)setupPlayer;
- (void)startObservers;
- (void)stopObservers;

@end
