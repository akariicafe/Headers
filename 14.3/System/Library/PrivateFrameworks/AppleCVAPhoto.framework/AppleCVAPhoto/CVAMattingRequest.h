@class CVADisparityPostprocessingRequest;

@interface CVAMattingRequest : NSObject

@property (readonly) CVADisparityPostprocessingRequest *disparityPostprocessingRequest;
@property (readonly) struct __CVBuffer { } *segmentationPixelBuffer;
@property (readonly) struct __CVBuffer { } *skinSegmentationPixelBuffer;
@property (readonly) struct __CVBuffer { } *destinationAlphaMattePixelBuffer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDisparityPostprocessingRequest:(id)a0 segmentationPixelBuffer:(struct __CVBuffer { } *)a1 skinSegmentationPixelBuffer:(struct __CVBuffer { } *)a2 destinationAlphaMattePixelBuffer:(struct __CVBuffer { } *)a3 error:(id *)a4;
- (id)initWithDisparityPostprocessingRequest:(id)a0 destinationAlphaMattePixelBuffer:(struct __CVBuffer { } *)a1;
- (id)initWithDisparityPostprocessingRequest:(id)a0 segmentationPixelBuffer:(struct __CVBuffer { } *)a1 destinationAlphaMattePixelBuffer:(struct __CVBuffer { } *)a2 error:(id *)a3;

@end
