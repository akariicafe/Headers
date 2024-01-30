@class VNProcessingDevice, MPSImageSpatioTemporalGuidedFilter;

@interface VNGuidedUpsamplingGenerator : VNDetector {
    VNProcessingDevice *_processingDevice;
    MPSImageSpatioTemporalGuidedFilter *_guidedFilter;
}

+ (id)configurationOptionKeysForDetectorKey;

- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)_renderCIImage:(id)a0 toBuffer:(void *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 rowBytes:(unsigned long long)a4 format:(unsigned int)a5 error:(id *)a6;
- (struct __CVBuffer { } *)_renderCIImage:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 format:(unsigned int)a3 error:(id *)a4;
- (BOOL)needsMetalContext;

@end
