@class CUIRenditionMetrics, CUIRenditionSliceInformation;

@interface CUIMutableThemeRendition : CUIThemeRendition {
    struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *_renditionKey;
    struct CGImage { } *_image;
    CUIRenditionSliceInformation *_sliceInformation;
    CUIRenditionMetrics *_renditionMetrics;
}

- (void)setName:(id)a0;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0 withDescription:(id)a1 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a2;
- (id)metrics;
- (struct CGImage { } *)unslicedImage;
- (id)sliceInformation;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)key;

@end
