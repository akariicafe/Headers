@class NSMutableDictionary, NSMutableSet, CALayer, MPSImageConversion, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue, MTLDeviceSPI;

@interface CMPhotoTiledLayer : CALayer {
    struct CMPhotoDecompressionSession { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct os_unfair_lock_s { unsigned int x0; } x1; unsigned long long x2; struct __CFSet *x3; id x4; struct { unsigned char x0; id x1; id x2; id x3; struct __CFArray *x4; int x5; } x5; struct { unsigned char x0; id x1; id x2; id x3; struct __CFArray *x4; int x5; } x6; struct { unsigned char x0; id x1; id x2; id x3; struct __CFArray *x4; int x5; } x7; struct { unsigned char x0; int x1; struct os_unfair_lock_s { unsigned int x0; } x2; id x3; struct __CFArray *x4; } x8; struct CMPhotoSurfacePool *x9; struct CMPhotoScaleAndRotateSession *x10; struct CMPhotoCodecSessionPool *x11; struct CMPhotoCodecSessionPool *x12; id /* block */ x13; void *x14; unsigned long long x15; } *_decodeSession;
    struct CMPhotoDecompressionContainer { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct CMPhotoDecompressionSession *x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; struct CMPhotoDecompressionContainerVTable *x7; union { struct { struct __CFAllocator *x0; struct OpaqueFigPictureCollection *x1; struct OpaqueFigFormatReader *x2; struct { unsigned char x0; long long x1; long long x2; struct CGImageMetadata *x3; struct __CFDictionary *x4; int x5; } x3; struct { unsigned char x0; struct __CFArray *x1; } x4; struct { unsigned char x0; long long x1; long long x2; } x5; struct { unsigned char x0; unsigned char x1; } x6; struct { unsigned char x0; unsigned char x1; } x7; } x0; struct { struct __CFAllocator *x0; struct OpaqueFigFormatReader *x1; struct __CFDictionary *x2; struct *x3; struct __CFArray *x4; struct __CFArray *x5; unsigned char x6; } x1; struct { struct __CFAllocator *x0; struct { int x0; union { void *x0; struct __CFURL *x1; struct __IOSurface *x2; struct __CFData *x3; struct OpaqueCMBlockBuffer *x4; } x1; struct OpaqueCMByteStream *x2; } x1; struct OpaqueFigSimpleMutex *x2; struct { struct { unsigned char x0; struct __CFArray *x1; } x0; } x3; struct CMPhotoUnifiedJPEGDecoder *x4; struct { unsigned char x0; struct { unsigned long long x0; unsigned long long x1; } x1; int x2; unsigned char x3; unsigned char x4; int x5; } x5; struct { unsigned char x0; struct *x1; unsigned long long x2; } x6; struct { unsigned char x0; unsigned char x1; struct { long long x0; unsigned long long x1; } x2; int x3; unsigned char x4; struct { unsigned char x0; struct { unsigned long long x0; unsigned long long x1; } x1; int x2; struct { long long x0; unsigned long long x1; } x3; int x4; } x5; } x7; struct { unsigned char x0; unsigned char x1; struct { long long x0; unsigned long long x1; } x2; } x8; struct { unsigned char x0; unsigned char x1; struct { long long x0; unsigned long long x1; } x2; struct __CFData *x3; } x9; struct { unsigned char x0; unsigned char x1; struct __CFData *x2; } x10; struct { unsigned char x0; unsigned char x1; struct __CFData *x2; } x11; } x2; } x8; unsigned long long x9; unsigned long long x10; struct { unsigned char x0; long long x1; } x11; struct { unsigned char x0; long long x1; } x12; int x13; } *_container;
    int _containerFormat;
    long long _imageIndex;
    struct CGSize { double width; double height; } _tileSize;
    BOOL _hasExtendedColorDisplay;
    BOOL _shouldTile;
    unsigned int _decodePixelFormat;
    unsigned int _conversionPixelFormat;
    id<MTLDevice, MTLDeviceSPI> _metalDevice;
    id<MTLCommandQueue> _metalCmdQueue;
    NSObject<OS_dispatch_queue> *_metalQueue;
    MPSImageConversion *_metalConverter;
    struct vImageConverter { } *_vimageConverter;
    BOOL _hasAlpha;
    int _err;
    struct CMPhotoCache { } *_tileCache;
    struct CMPhotoSurfacePool { } *_surfacePool;
    NSMutableSet *_visibleTileKeys;
    NSMutableDictionary *_subLayers;
    NSObject<OS_dispatch_queue> *_updateQueue;
    _Atomic unsigned int _requestID;
    int _zoomLevel;
    CALayer *_placeholderLayer;
    struct CGImage { } *_placeholderImage;
    double _zoomStartScale;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastVisibleRect;
    double _lastZoomScale;
    BOOL _lastAboveZoomThreshold;
    BOOL _showTileBorders;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) long long imageOrientation;

- (void)flushCache;
- (void)sizeToFit;
- (void)dealloc;
- (id)initWithContainerData:(id)a0 containerImageIndex:(long long)a1 backgroundImageSize:(struct CGSize { double x0; double x1; })a2 screenSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithContainerData:(id)a0 containerImageIndex:(long long)a1 placeholderImage:(struct CGImage { } *)a2 screenSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithContainerURL:(id)a0 containerImageIndex:(long long)a1 backgroundImageSize:(struct CGSize { double x0; double x1; })a2 screenSize:(struct CGSize { double x0; double x1; })a3;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)_removeAllTiles;
- (void)_decodeImageRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLevel:(int)a1 zoomScale:(double)a2 requestId:(unsigned int)a3 completionHandler:(id /* block */)a4;
- (void)_prepareForDecode;
- (void)_runMetalConversionOnSurface:(struct __IOSurface { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (void)_runVImageConversionOnSurface:(struct __IOSurface { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (void)_setupConverterForSourceColorSpace:(struct CGColorSpace { } *)a0 destinationColorSpace:(struct CGColorSpace { } *)a1;
- (void)_updateSubLayers:(id)a0 zoomScale:(double)a1;
- (BOOL)_visibleTileRegionHasChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 level:(int)a1;
- (double)_zoomStartScaleForImage:(struct CGSize { double x0; double x1; })a0 placeholderImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithContainer:(id)a0 containerImageIndex:(long long)a1 backgroundImageSize:(struct CGSize { double x0; double x1; })a2 screenSize:(struct CGSize { double x0; double x1; })a3;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1 completionHandler:(id /* block */)a2;

@end
