@interface ARImageDistortionCorrectionTechnique : ARTechnique {
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } _mappingU;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } _mappingV;
    struct vImageMapping { } *_mapping;
    struct __CVPixelBufferPool { } *_undistortedImageBufferPool;
    struct __CVPixelBufferPool { } *_rgbImagePool;
    struct __CVPixelBufferPool { } *_rgbUndistortedImagePool;
    BOOL _uvMapExists;
}

@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void).cxx_destruct;
- (id)processData:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)buildUVMapWithOriginalImageData:(id)a0;
- (void)buildUVMapFromHardcodedCalibrationParametersWithOriginalImageData:(id)a0;
- (void)undistortImage:(struct __CVBuffer { } *)a0 toTargetImage:(struct __CVBuffer { } *)a1;
- (struct CGPoint { double x0; double x1; })lensDistortionPointForPoint:(struct CGPoint { double x0; double x1; })a0 lookupTable:(id)a1 distortionOpticalCenter:(struct CGPoint { double x0; double x1; })a2 imageSize:(struct CGSize { double x0; double x1; })a3;

@end
