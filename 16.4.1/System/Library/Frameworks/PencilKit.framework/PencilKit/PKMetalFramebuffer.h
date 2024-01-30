@protocol MTLTexture, MTLDevice;

@interface PKMetalFramebuffer : NSObject {
    long long _nonVolatileLockCount;
    BOOL _isVolatile;
    BOOL _canBeMadeVolatile;
    BOOL _memoryless;
    BOOL _backedByIOSurface;
    id<MTLTexture> _colorTexture;
    id<MTLDevice> _device;
    unsigned long long _pixelFormat;
    unsigned long long _sampleCount;
    struct __IOSurface { } *_ioSurface;
    long long _blendMode;
    struct CGSize { double width; double height; } _size;
    struct { double red; double green; double blue; double alpha; } _clearColor;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
