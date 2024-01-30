@interface PLPositionalBGRAImageTable : PLPositionalImageTable

+ (unsigned long long)metalPixelFormat;
+ (const struct __CFString { } *)colorSpaceName;

- (void)getImageDataOffset:(long long *)a0 size:(struct CGSize { double x0; double x1; } *)a1 bytesPerRow:(unsigned long long *)a2 fromEntryFooter:(struct PLImageTableEntryFooter_s { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x0; unsigned int x1; unsigned int x2; int x3; } *)a3;
- (struct CGImage { } *)createImageWithIdentifier:(id)a0 orIndex:(unsigned long long)a1;

@end
