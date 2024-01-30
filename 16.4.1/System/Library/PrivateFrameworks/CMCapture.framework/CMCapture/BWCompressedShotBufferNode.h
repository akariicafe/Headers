@class NSString, BWPhotoDecompressor, BWPixelBufferPool, NSDictionary, NSMutableArray, BWNodeOutput, NSObject, BWNodeInput;
@protocol OS_dispatch_queue;

@interface BWCompressedShotBufferNode : BWNode <BWCompressedShotBuffer> {
    BWNodeInput *_sensorRawInput;
    BWNodeOutput *_sensorRawOutput;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferTrackingLock;
    int _inUseUncompressedBufferCount;
    int _inUseCompressedBufferCount;
    int _uncompressedEquivalentCapacity;
    long long _inUseCompressedBytes;
    long long _compressedByteCapacity;
    NSMutableArray *_queuedCompressedSampleBuffers;
    struct CMPhotoCompressionSession { } *_compressionSession;
    NSDictionary *_compressionOptions;
    int _compressionTiles;
    BOOL _compressedSurfacePoolEnabled;
    struct { int width; int height; } _compressionInputDimensions;
    NSObject<OS_dispatch_queue> *_decompressionQueue;
    BWPhotoDecompressor *_decompressor;
    BWPixelBufferPool *_decompressionPool;
    int _decompressionPoolCapacity;
    struct opaqueCMFormatDescription { } *_decompressionFormatDescription;
}

@property (readonly, nonatomic) BWNodeInput *sensorRawInput;
@property (readonly, nonatomic) BWNodeOutput *sensorRawOutput;
@property (nonatomic) int uncompressedEquivalentCapacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (void)flushAndWaitForUncompressedEquivalentFreeBufferCount:(int)a0;
- (id)initWithThreadPriority:(unsigned int)a0;

@end
