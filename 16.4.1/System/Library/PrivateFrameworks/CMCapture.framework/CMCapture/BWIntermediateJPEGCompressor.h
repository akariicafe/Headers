@class BWMovingWindowStats, NSString, NSMutableDictionary, NSObject, BWStats;
@protocol OS_dispatch_semaphore;

@interface BWIntermediateJPEGCompressor : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_semaphore> *_backPressureSemaphore;
    unsigned long long _compressedBufferSize;
    unsigned long long _compressedBufferPoolAllocationTimeoutMS;
    float _compressionQuality;
    float _compressionRate;
    int _numberOfTimesWaitedOnBackPressureSemaphore;
    int _jpegSurfacePoolLowWaterBufferCount;
    int _jpegSurfacePoolHighWaterBufferCount;
    BOOL _setupIsComplete;
    struct CMPhotoSurfacePool { } *_surfacePool;
    struct CMPhotoCompressionSession { } *_compressionSession;
    struct __CFDictionary { } *_containerOptions;
    NSMutableDictionary *_qualityControllerParameters;
    struct __CFDictionary { } *_compressionOptions;
    struct opaqueCMFormatDescription { } *_jpegFormatDescription;
    BWStats *_overallWaitStats;
    BWMovingWindowStats *_recentWaitStats;
}

+ (void)initialize;

- (id)initWithCompressionQuality:(float)a0 compressionRate:(float)a1 jpegSurfacePoolLowWaterBufferCount:(int)a2 jpegSurfacePoolHighWaterBufferCount:(int)a3 compressedBufferPoolAllocationTimeoutMS:(unsigned long long)a4 name:(id)a5;
- (struct opaqueCMSampleBuffer { } *)newJPEGSampleBufferFromUncompressedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)flush;
- (void)dealloc;

@end
