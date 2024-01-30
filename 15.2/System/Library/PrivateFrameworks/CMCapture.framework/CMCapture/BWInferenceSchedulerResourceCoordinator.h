@class NSMutableDictionary;

@interface BWInferenceSchedulerResourceCoordinator : NSObject {
    NSMutableDictionary *_requestedPoolSizeByFormat;
    NSMutableDictionary *_pixelBufferPoolByFormat;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (int)requestPixelBufferPoolForFormat:(id)a0 size:(unsigned long long)a1;
- (int)requestPixelBufferPoolForRequirement:(id)a0 size:(unsigned long long)a1;
- (void)preparePixelBufferPools;
- (id)pixelBufferPoolForFormat:(id)a0;
- (id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)a0;

@end
