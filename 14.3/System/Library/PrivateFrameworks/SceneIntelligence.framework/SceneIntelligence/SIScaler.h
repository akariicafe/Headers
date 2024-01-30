@interface SIScaler : NSObject {
    struct __CVPixelBufferPool { } *_pool;
    struct OpaqueVTPixelTransferSession { } *_session;
    struct CGSize { double width; double height; } _inputResolution;
    struct CGSize { double width; double height; } _outputResolution;
}

- (id)initForInputResolution:(struct CGSize { double x0; double x1; })a0 andOutputResolution:(struct CGSize { double x0; double x1; })a1;
- (struct __CVBuffer { } *)scaleImage:(struct __CVBuffer { } *)a0;

@end
