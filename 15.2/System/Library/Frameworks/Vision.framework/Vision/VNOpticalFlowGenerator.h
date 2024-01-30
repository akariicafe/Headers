@interface VNOpticalFlowGenerator : VNDetector

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (id)_validatedImageBuffersFromOptions:(id)a0 error:(id *)a1;
- (struct optional<OpticalFlowOptions> { union { char x0; struct OpticalFlowOptions { id x0; unsigned int x1; unsigned long long x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; float x7; float x8; float x9; } x1; } x0; BOOL x1; })_validatedOpticalFlowOptions:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 error:(id *)a3;
- (struct CVPixelBufferWrapper { struct __CVBuffer *x0; })_createVectorResultPixelBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2 error:(id *)a3;
- (id)_calculateLKTVectorResult:(struct CVPixelBufferWrapper { struct __CVBuffer *x0; })a0 fromPixelBuffer:(struct CVPixelBufferWrapper { struct __CVBuffer *x0; })a1 toPixelBuffer:(struct CVPixelBufferWrapper { struct __CVBuffer *x0; })a2 opticalFlowOptions:(const struct OpticalFlowOptions { id x0; unsigned int x1; unsigned long long x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; float x7; float x8; float x9; } *)a3 useCPU:(BOOL)a4 error:(id *)a5;
- (id)_createOpticalFlowForPixelBuffer:(struct CVPixelBufferWrapper { struct __CVBuffer *x0; })a0 opticalFlowOptions:(const struct OpticalFlowOptions { id x0; unsigned int x1; unsigned long long x2; unsigned long long x3; BOOL x4; unsigned long long x5; unsigned long long x6; float x7; float x8; float x9; } *)a1 useCPU:(BOOL)a2 error:(id *)a3;
- (id)_initializedLKTMetalContextAndReturnError:(id *)a0;

@end
