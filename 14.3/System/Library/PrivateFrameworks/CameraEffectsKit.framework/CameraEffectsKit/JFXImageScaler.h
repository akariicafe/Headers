@interface JFXImageScaler : NSObject {
    BOOL _useCPU;
    struct OpaqueVTPixelTransferSession { } *_vtPixelTransferSession;
}

- (void)dealloc;
- (id)initForCPU:(BOOL)a0;
- (void)scaleImage:(struct __CVBuffer { } *)a0 destinationImage:(struct __CVBuffer { } *)a1;

@end
