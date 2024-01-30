@class CUIRenditionMetrics, CUIRenditionSliceInformation;

@interface CUIMutableThemeRendition : CUIThemeRendition {
    struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *_renditionKey;
    struct CGImage { } *_image;
    CUIRenditionSliceInformation *_sliceInformation;
    CUIRenditionMetrics *_renditionMetrics;
}

- (struct CGImage { } *)unslicedImage;
- (void)setName:(id)a0;
- (id)sliceInformation;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)key;
- (id)metrics;
- (id)initWithCGImage:(struct CGImage { } *)a0 withDescription:(id)a1 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a2;
- (void)dealloc;

@end
