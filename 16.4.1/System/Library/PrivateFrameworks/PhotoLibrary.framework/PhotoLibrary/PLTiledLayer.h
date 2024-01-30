@class NSData, NSString, MPSImageConversion, CALayer, NSMutableDictionary, NSObject, NSMutableSet, PLCache;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue, MTLDeviceSPI;

@interface PLTiledLayer : CALayer <PLTileableLayer> {
    NSData *_jpegData;
    struct jpegDecoder { struct ajdec *x0; id x1; } *_decoders;
    int _decoderCount;
    int _tilePixelSize;
    int _maxNumberOfTiles;
    struct CGSize { double width; double height; } _fullSize;
    BOOL _hasExtendedColorDisplay;
    BOOL _shouldTile;
    struct CGColorSpace { } *_colorspace;
    unsigned int _decodePixelFormat;
    unsigned int _conversionPixelFormat;
    id<MTLDevice, MTLDeviceSPI> _metalDevice;
    id<MTLCommandQueue> _metalCmdQueue;
    MPSImageConversion *_metalConverter;
    struct vImageConverter { } *_vimageConverter;
    int _err;
    PLCache *_tileCache;
    struct iosPoolOpaque { } *_surfacePool;
    NSMutableSet *_visibleTileIds;
    NSMutableDictionary *_subLayers;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    NSObject<OS_dispatch_queue> *_conversionQueue;
    unsigned int _requestId;
    int _zoomLevel;
    CALayer *_placeholderLayer;
    struct CGImage { } *_placeholderImage;
    double _zoomStartScale;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastVisibleRect;
    double _lastZoomScale;
    BOOL _showTileBorders;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } jpegImageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flushCache;
- (void)dealloc;
- (void)removeAllTiles;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1 completionHandler:(id /* block */)a2;
- (id)initWithJPEGData:(id)a0 placeholderImage:(struct CGImage { } *)a1 screenSize:(struct CGSize { double x0; double x1; })a2;
- (void)decodeImageRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forLevel:(int)a1 requestId:(unsigned int)a2 completionHandler:(id /* block */)a3;
- (void)prepareForDecoding;
- (void)runMetalConversionOnSurface:(struct __IOSurface { } *)a0 completionHandler:(id /* block */)a1;
- (void)runVImageConversionOnSurface:(struct __IOSurface { } *)a0 completionHandler:(id /* block */)a1;
- (void)setupConverterForSourceColorSpace:(struct CGColorSpace { } *)a0 destinationColorSpace:(struct CGColorSpace { } *)a1;
- (void)updateSubLayers:(id)a0;
- (BOOL)visibleTileRegionHasChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 level:(int)a1;
- (double)zoomStartScaleForImage:(struct CGSize { double x0; double x1; })a0 placeholderImageSize:(struct CGSize { double x0; double x1; })a1;

@end
