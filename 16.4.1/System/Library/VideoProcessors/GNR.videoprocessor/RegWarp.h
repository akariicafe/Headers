@interface RegWarp : NSObject {
    struct ImageRegistrationCtx_s { } *_imageRegCtx;
}

- (void)dealloc;
- (int)runIterativeWithNonRefImage:(struct __CVBuffer { } *)a0 outputTransform:(struct Mat3x3f { float x0[9]; } *)a1;
- (int)runWithRefImage:(struct __CVBuffer { } *)a0 nonRefImages:(struct __CVBuffer **)a1 numNonReferenceImages:(unsigned char)a2 outputTransforms:(struct Mat3x3f { float x0[9]; } *)a3 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)init;
- (int)runIterativeWithRefImage:(struct __CVBuffer { } *)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
