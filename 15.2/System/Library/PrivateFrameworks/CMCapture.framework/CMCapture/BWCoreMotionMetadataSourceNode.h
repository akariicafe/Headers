@class CMMotionManager, NSObject;
@protocol OS_dispatch_queue;

@interface BWCoreMotionMetadataSourceNode : BWSourceNode {
    CMMotionManager *_motionManager;
    int _bufferGenerationRate;
    int _samplesPerBuffer;
    BOOL _running;
    struct BWCoreMotionMetadataSampleData { unsigned int x0; unsigned int x1; double x2; double x3; double x4; double x5; double x6; float x7; float x8; float x9; } *_sampleDataForBuffer;
    int _numSamplesInBuffer;
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    unsigned int _localIDOfCoreMotionMetadata_BE;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;

+ (void)initialize;
+ (int)extractBWCoreMotionMetadataFromBlockBuffer:(struct OpaqueCMBlockBuffer { } *)a0 intoNativeEndianSampleData:(struct BWCoreMotionMetadataSampleData { unsigned int x0; unsigned int x1; double x2; double x3; double x4; double x5; double x6; float x7; float x8; float x9; } *)a1;
+ (int)extractBWCoreMotionMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 intoNativeEndianSampleData:(struct BWCoreMotionMetadataSampleData { unsigned int x0; unsigned int x1; double x2; double x3; double x4; double x5; double x6; float x7; float x8; float x9; } *)a1;

- (BOOL)start:(id *)a0;
- (id)nodeSubType;
- (struct OpaqueCMClock { } *)clock;
- (BOOL)stop:(id *)a0;
- (void)dealloc;
- (void)_emitMetadataSampleBuffer;
- (id)initWithBufferGenerationRate:(int)a0 samplesPerBuffer:(int)a1;

@end
