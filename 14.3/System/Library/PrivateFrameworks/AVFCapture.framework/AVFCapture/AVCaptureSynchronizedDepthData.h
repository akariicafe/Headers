@class AVCaptureSynchronizedDepthDataInternal, AVDepthData;

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedDepthDataInternal *_internal;
}

@property (readonly) AVDepthData *depthData;
@property (readonly) BOOL depthDataWasDropped;
@property (readonly) long long droppedReason;

+ (void)initialize;

- (id)_initWithDepthData:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 depthDataWasDropped:(BOOL)a2 droppedReason:(long long)a3;
- (void)dealloc;
- (id)description;
- (id)debugDescription;

@end
