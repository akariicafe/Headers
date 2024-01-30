@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARImageBasedTechnique : ARTechnique {
    NSMutableArray *_pendingResultData;
    NSMutableArray *_pendingFrameReferences;
    NSMutableArray *_pendingRequestContexts;
    NSObject<OS_dispatch_semaphore> *_pendingRequestsSemaphore;
    long long _lastValidDeviceOrientation;
}

- (id)processData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_fullDescription;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (void)pushResultData:(id)a0 forTimestamp:(double)a1;
- (BOOL)context:(id)a0 matchesFrameReference:(id)a1;
- (void)prepareResultData:(id)a0 forContext:(id)a1;
- (void)pushResultData:(id)a0 forFrameReference:(id)a1;
- (void)pushResultData:(id)a0 forFrame:(struct __CVBuffer { } *)a1;
- (long long)getDeviceOrientationFromImageData:(id)a0;

@end
