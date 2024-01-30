@interface VNHomographicImageRegistrationDetector : VNDetector {
    void *_glContext;
}

- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)_validatedImageBufferForKey:(id)a0 inOptions:(id)a1 error:(id *)a2;
- (BOOL)_createN:(unsigned long long)a0 CVPixelBuffers:(struct __CVBuffer **)a1 withPixelFormat:(unsigned int)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 error:(id *)a5;
- (struct __CVBuffer { } *)_createHomographicPixelBufferFromImageBuffer:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3;
- (BOOL)_calculateHomographicWarpTransform:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0 ofFloatingImagePixelBuffer:(struct __CVBuffer { } *)a1 ontoReferenceImagePixelBuffer:(struct __CVBuffer { } *)a2 usingImageRegistrationContext:(struct ImageRegistrationCtx_s { } *)a3 glContext:(void *)a4 seededWithPreviousWarpTransform:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a5 error:(id *)a6;

@end
