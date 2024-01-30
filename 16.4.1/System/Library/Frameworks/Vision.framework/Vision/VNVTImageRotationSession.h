@interface VNVTImageRotationSession : VNVTSession {
    unsigned int _rotation;
    struct OpaqueVTPixelRotationSession { } *_imageRotationSession;
}

- (void)dealloc;

@end
