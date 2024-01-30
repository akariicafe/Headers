@class NSString;

@interface _CUIThemeColorRendition : CUIThemeRendition {
    struct CGColor { } *_cgColor;
    const struct _csicolor { unsigned int x0; unsigned int x1; unsigned char x2 : 8; unsigned char x3 : 3; unsigned int x4 : 21; unsigned int x5; double x6[0]; } *_csiColor;
    NSString *_colorName;
}

- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (const struct _csicolor { unsigned int x0; unsigned int x1; unsigned char x2 : 8; unsigned char x3 : 3; unsigned int x4 : 21; unsigned int x5; double x6[0]; } *)csiColor;
- (BOOL)substituteWithSystemColor;
- (id)systemColorName;
- (void)dealloc;
- (struct CGColor { } *)cgColor;

@end
