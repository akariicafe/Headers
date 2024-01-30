@class CUIRenditionSliceInformation, _CSIRenditionBlockData, CUIRenditionMetrics, NSMutableArray;

@interface _CUIThemePixelRendition : CUIThemeRendition {
    unsigned int _nimages;
    struct CGImage *_image[16];
    struct CGImage { } *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    _CSIRenditionBlockData *_cachedBlockDataBGRX;
    _CSIRenditionBlockData *_cachedBlockDataRGBX;
    _CSIRenditionBlockData *_cachedBlockDataGray;
    unsigned long long _sourceRowbytes;
    NSMutableArray *_layers;
    struct CGSize { double width; double height; } _unslicedSize;
}

- (BOOL)isScaled;
- (unsigned long long)sourceRowbytes;
- (BOOL)isTiled;
- (int)pixelFormat;
- (id)metrics;
- (void)dealloc;
- (id)copySharedBlockDataWithPixelFormat:(int)a0;
- (id)layerReferences;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (id)imageForSliceIndex:(long long)a0;
- (struct CGImage { } *)unslicedImage;
- (id)initWithCSIData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (void)setSharedBlockData:(id)a0;
- (struct CGSize { double x0; double x1; })unslicedSize;
- (id)sliceInformation;
- (id)maskForSliceIndex:(long long)a0;
- (BOOL)edgesOnly;

@end
