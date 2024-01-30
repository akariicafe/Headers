@class CUIRenditionSliceInformation, CUIRenditionKey, CUIRenditionMetrics, CUIStructuredThemeStore;

@interface _CUIInternalLinkRendition : CUIThemeRendition {
    unsigned int _nimages;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect[16];
    struct CGImage *_image[16];
    struct CGImage { } *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    CUIStructuredThemeStore *_sourceProvider;
    CUIRenditionKey *_referenceKey;
    struct CGSize { double width; double height; } _originalUncroppedSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alphaCroppedFrame;
}

- (struct CGSize { double x0; double x1; })originalUncroppedSize;
- (BOOL)isOpaque;
- (id)maskForSliceIndex:(long long)a0;
- (id)properties;
- (void).cxx_destruct;
- (int)pixelFormat;
- (void)_setStructuredThemeStore:(id)a0;
- (id)data;
- (id)imageForSliceIndex:(long long)a0;
- (void)dealloc;
- (id)metrics;
- (struct CGImage { } *)unslicedImage;
- (id)sliceInformation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_destinationFrame;
- (BOOL)edgesOnly;
- (struct CGSize { double x0; double x1; })unslicedSize;
- (id)_sourceRendition;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (int)bitmapEncoding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alphaCroppedRect;
- (id)linkingToRendition;
- (BOOL)isInternalLink;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (id)initWithCSIData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;

@end
