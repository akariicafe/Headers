@interface VNVTSession : NSObject {
    unsigned int _inputPixelFormat;
    unsigned int _outputPixelFormat;
    const void *_session;
}

- (void)dealloc;
- (id)initWithSession:(void *)a0;

@end
