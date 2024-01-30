@class NSArray, NSMutableDictionary, NSDictionary, SoftISPProcessor, FigMetalExecutionStatus;
@protocol MTLCommandBuffer;

@interface SoftISPOutputFrame : NSObject {
    unsigned int _outputDownscaleFactor;
    union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } _maximumOutputDimensions;
    struct { union { void /* unknown type, empty encoding */ vec; struct { int x; int y; } ; } origin; union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } size; } _outputBufferRectWithinSensorCropRect;
}

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *auxiliaryPixelBuffers;
@property (readonly, nonatomic) NSArray *textures;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL hasValidRegistration;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } regHomography;
@property (nonatomic) int error;
@property (nonatomic) unsigned long long gpuStatus;
@property (nonatomic) unsigned long long gpuError;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, nonatomic) int numberOfCompletionHandlers;
@property (readonly, nonatomic) int numberOfCalledCompletionHandlers;
@property (readonly, nonatomic) BOOL allCommandBuffersEnqueued;
@property (readonly, nonatomic) SoftISPProcessor *parentProcessor;
@property (readonly, nonatomic) NSDictionary *processingOptions;
@property (readonly, nonatomic) unsigned long long uniqueID;
@property (readonly, nonatomic) union { unsigned long long frameID; struct { unsigned short captureIndex; unsigned short sensorIndex; BOOL isSIFR; BOOL isPB; char timeMachineIndex; char bracketedCaptureIndex; } ; } frameID;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (readonly, nonatomic) FigMetalExecutionStatus *metalExecutionStatus;
@property (retain, nonatomic) struct __CVBuffer { } *lscPixelBuffer;
@property (retain, nonatomic) NSDictionary *lscParameters;

- (void)waitForCompletion;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)signalAllCommandBuffersEnqueued;
- (void)addCompletionHandlerToCommandBuffer:(id)a0;
- (int)bindTexturesForConfig:(id)a0 metalContext:(id)a1;
- (struct __CVBuffer { } *)getAuxiliaryPixelBufferForAuxiliaryType:(int)a0;
- (id)getAuxiliaryPixelBuffers;
- (id)initWithInputFrame:(id)a0 maximumOutputDimensions:(union { struct { unsigned int x0; unsigned int x1; } x0; })a1 outputDownscaleFactor:(unsigned int)a2 parentProcessor:(id)a3;
- (void)releaseAuxiliaryPixelBuffers;
- (void)releasePixelBuffer;
- (void)setAuxiliaryPixelBuffer:(struct __CVBuffer { } *)a0 auxiliaryType:(int)a1;

@end
