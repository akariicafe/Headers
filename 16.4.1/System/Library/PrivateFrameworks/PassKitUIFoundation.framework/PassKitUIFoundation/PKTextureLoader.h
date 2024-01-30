@protocol MTLDevice, MTLBuffer;

@interface PKTextureLoader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _storageMode;
    struct vImage_CGImageFormat { unsigned int bitsPerComponent; unsigned int bitsPerPixel; struct CGColorSpace *colorSpace; unsigned int bitmapInfo; unsigned int version; double *decode; int renderingIntent; } _sourceFormat;
    struct CGColorSpace { } *_sourceColorSpace;
    struct vImage_CGImageFormat { unsigned int bitsPerComponent; unsigned int bitsPerPixel; struct CGColorSpace *colorSpace; unsigned int bitmapInfo; unsigned int version; double *decode; int renderingIntent; } _destinationFormat;
    struct CGColorSpace { } *_destinationColorSpace;
    id<MTLDevice> _device;
    struct CGImage { } *_image;
    struct vImageConverter { } *_converter;
    id<MTLBuffer> _buffer;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _bytesPerRow;
}

@property (readonly, nonatomic) unsigned long long format;

- (void)dealloc;
- (id)init;
- (void)read:(id /* block */)a0;
- (void)decode;
- (void).cxx_destruct;

@end
