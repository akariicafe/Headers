@class NSMutableDictionary;

@interface BWInferenceSchedulerResourceCoordinator : NSObject {
    NSMutableDictionary *_requestedPoolSizeByFormat;
    NSMutableDictionary *_pixelBufferPoolByFormat;
}

+ (void)initialize;

- (int)requestPixelBufferPoolForRequirement:(id)a0 size:(unsigned long long)a1;
- (id)pixelBufferPoolForFormat:(id)a0;
- (void)preparePixelBufferPools;
- (void)dealloc;
- (id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)a0;
- (int)requestPixelBufferPoolForFormat:(id)a0 size:(unsigned long long)a1;
- (id)init;

@end
