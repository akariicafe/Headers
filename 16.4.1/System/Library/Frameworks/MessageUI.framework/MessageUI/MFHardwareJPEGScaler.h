@class NSData;

@interface MFHardwareJPEGScaler : NSObject {
    struct __IOSurface { } *_ioSurfaceRef;
    NSData *_imageData;
    struct __CFDictionary { } *_imageProperties;
    BOOL _canHardwareScaleImage;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_decodeImageToIOSurface;
- (BOOL)_isJPEGImage:(struct CGImageSource { } *)a0;
- (id)initWithImageData:(id)a0 imageSource:(struct CGImageSource { } *)a1;
- (BOOL)scaleImageToFitLargestDimension:(id)a0 dataConsumer:(id)a1;

@end
