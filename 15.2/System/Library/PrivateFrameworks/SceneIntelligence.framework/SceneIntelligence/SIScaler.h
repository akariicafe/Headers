@interface SIScaler : NSObject {
    struct __CVPixelBufferPool { } *_pool;
    struct OpaqueVTPixelTransferSession { } *_session;
    struct CGSize { double width; double height; } _outputResolution;
    unsigned int _outputPixelFormat;
}

- (void)dealloc;
- (id)initForOutputResolution:(struct CGSize { double x0; double x1; })a0 outputPixelFormat:(unsigned int)a1 mode:(unsigned long long)a2;
- (BOOL)_imageConformsToOutput:(struct __CVBuffer { } *)a0;
- (id)initForInputResolution:(struct CGSize { double x0; double x1; })a0 outputResolution:(struct CGSize { double x0; double x1; })a1 outputPixelFormat:(unsigned int)a2 mode:(unsigned long long)a3;
- (id)initForInputResolution:(struct CGSize { double x0; double x1; })a0 outputResolution:(struct CGSize { double x0; double x1; })a1 outputPixelFormat:(unsigned int)a2;
- (BOOL)scaleImage:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;
- (struct __CVBuffer { } *)scaleImage:(struct __CVBuffer { } *)a0;

@end
