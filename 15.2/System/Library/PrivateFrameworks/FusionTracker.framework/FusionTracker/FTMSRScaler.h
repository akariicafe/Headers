@interface FTMSRScaler : NSObject <FTScaling> {
    struct unique_ptr<ik::PixelBufferResampler, std::default_delete<ik::PixelBufferResampler>> { struct __compressed_pair<ik::PixelBufferResampler *, std::default_delete<ik::PixelBufferResampler>> { struct PixelBufferResampler *__value_; } __ptr_; } _resampler;
}

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (BOOL)scaleSourceBuffer:(struct __CVBuffer { } *)a0 toDestinationBuffer:(struct __CVBuffer { } *)a1 sourceROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 destinationROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)scaleSourceBuffer:(struct __CVBuffer { } *)a0 toDestinationBuffer:(struct __CVBuffer { } *)a1 sourceROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 destinationROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 mean:(void *)a4;

@end
