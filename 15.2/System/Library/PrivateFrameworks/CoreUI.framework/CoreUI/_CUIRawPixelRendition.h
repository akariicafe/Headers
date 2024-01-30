@class NSData, CUIRenditionMetrics, CUIRenditionSliceInformation;

@interface _CUIRawPixelRendition : CUIThemeRendition {
    int _pixelFormat;
    unsigned int _nimages;
    NSData *_rawData;
    struct CGImage *_image[16];
    struct CGImage { } *_unslicedImage;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
}

- (struct CGImage { } *)unslicedImage;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (id)sliceInformation;
- (BOOL)isScaled;
- (id)imageForSliceIndex:(long long)a0;
- (id)metrics;
- (id)maskForSliceIndex:(long long)a0;
- (int)pixelFormat;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })unslicedSize;
- (id)initWithCSIData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;

@end
