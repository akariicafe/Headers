@interface VNHomographicImageRegistrationDetector : VNDetector

- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 warningRecorder:(id)a2 pixelBuffer:(struct __CVBuffer **)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)_calculateHomographicWarpTransform:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0 ofFloatingImagePixelBuffer:(struct __CVBuffer { } *)a1 ontoReferenceImagePixelBuffer:(struct __CVBuffer { } *)a2 usingImageRegistrationContext:(struct ImageRegistrationCtx_s { } *)a3 seededWithPreviousWarpTransform:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4 error:(id *)a5;
- (struct __CVBuffer { } *)_createHomographicPixelBufferFromImageBuffer:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3;
- (BOOL)_createN:(unsigned long long)a0 CVPixelBuffers:(struct __CVBuffer **)a1 withPixelFormat:(unsigned int)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 error:(id *)a5;
- (id)_validatedImageBufferForKey:(id)a0 inOptions:(id)a1 error:(id *)a2;

@end
