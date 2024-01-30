@class NSMutableArray;

@interface _CUIThemeTextureImageRendition : CUIThemeRendition {
    NSMutableArray *_textureImages;
}

- (int)pixelFormat;
- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (id)textureImages;

@end
