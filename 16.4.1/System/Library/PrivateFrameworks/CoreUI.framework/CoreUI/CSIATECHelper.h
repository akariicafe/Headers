@interface CSIATECHelper : NSObject {
    unsigned int width;
    unsigned int height;
    unsigned int rowbytes;
    unsigned int glInternalFormat;
    unsigned int metalPixelFormat;
    struct __CFBoolean { } *twiddled;
    struct __CFData { } *data;
}

- (void)dealloc;

@end
