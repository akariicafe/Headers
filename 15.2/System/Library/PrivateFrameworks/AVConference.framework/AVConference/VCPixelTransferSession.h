@interface VCPixelTransferSession : NSObject {
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
}

- (id)init;
- (void)dealloc;

@end
