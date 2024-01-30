@class AVCaptureSynchronizedVisionDataInternal;

@interface AVCaptureSynchronizedVisionData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedVisionDataInternal *_internal;
}

@property (readonly) struct __CVBuffer { } *visionDataPixelBuffer;
@property (readonly) BOOL visionDataWasDropped;
@property (readonly) long long droppedReason;

- (void)dealloc;
- (id)_initWithVisionDataPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 visionDataWasDropped:(BOOL)a2 droppedReason:(long long)a3;

@end
