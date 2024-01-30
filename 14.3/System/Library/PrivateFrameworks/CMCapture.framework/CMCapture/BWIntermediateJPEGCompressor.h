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
    struct FigPhotoSurfacePool { } *_surfacePool;
    struct FigPhotoCompressionSession { } *_compressionSession;
    struct __CFDictionary { } *_containerOptions;
    NSMutableDictionary *_qualityControllerParameters;
    struct __CFDictionary { } *_compressionOptions;
    struct opaqueCMFormatDescription { } *_jpegFormatDescription;
    BWStats *_overallWaitStats;
    BWMovingWindowStats *_recentWaitStats;
}

+ (void)initialize;

- (void)_releaseResources;
- (id)initWithCompressionQuality:(float)a0 compressionRate:(float)a1 jpegSurfacePoolLowWaterBufferCount:(int)a2 jpegSurfacePoolHighWaterBufferCount:(int)a3 compressedBufferPoolAllocationTimeoutMS:(unsigned long long)a4 name:(id)a5;
- (int)_setupJPEGCompressionSession;
- (void)dealloc;
- (int)_setupJPEGSurfacePool;
- (int)_setupJPEGContainerOptions;
- (int)_setupJPEGCompressionOptions;
- (int)_setupJPEGFormatDescriptionFromSourceBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_setupJPEGEncodeResourcesForSourcePixelBuffer:(struct __CVBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)newJPEGSampleBufferFromUncompressedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
