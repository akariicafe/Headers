@class NSString;

@interface CPFont : NSObject <CPDisposable> {
    struct CGPDFFont { } *cgPDFFont;
    struct CGFont { } *cgFont;
    NSString *fontName;
    BOOL exactMatch;
    struct { double fontStretch; double fontWeight; unsigned int flags; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fontBBox; double italicAngle; double ascent; double descent; double leading; double capHeight; double xHeight; double stemV; double stemH; double avgWidth; double maxWidth; double missingWidth; double spaceWidth; double underlinePosition; double underlineThickness; } descriptor;
    struct __CFDictionary { } *kernDictionary;
    double kernUnitsPerEm;
    BOOL isHorizontal;
    double defaultWidth;
    BOOL disposed;
}

- (id)fontName;
- (double)maxWidth;
- (double)capHeight;
- (double)xHeight;
- (void)dealloc;
- (double)stemV;
- (double)stemH;
- (double)underlinePosition;
- (void)dispose;
- (struct CGFont { } *)cgFont;
- (double)leading;
- (unsigned int)flags;
- (double)descent;
- (double)ascent;
- (double)spaceWidth;
- (void)finalize;
- (double)fontWeight;
- (double)underlineThickness;
- (BOOL)isHorizontal;
- (double)fontStretch;
- (id)initWith:(struct CGPDFDictionary { } *)a0;
- (struct CGPDFFont { } *)cgPDFFont;
- (void)uniCharsFor:(unsigned long long)a0 count:(unsigned long long *)a1 toArray:(unsigned short *)a2 maxChars:(unsigned int)a3;
- (id)matchingFontName;
- (void)loadExternalFontInfoFor:(id)a0;
- (void)getFontName;
- (void)loadEmbeddedFontInfo;
- (BOOL)isSameFontAs:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fontBBox;
- (double)italicAngle;
- (double)avgWidth;
- (double)missingWidth;
- (double)kernBetweenUnicode:(unsigned short)a0 andUnicode:(unsigned short)a1;
- (BOOL)getGlyphs:(unsigned short *)a0 forCodes:(const unsigned short *)a1 count:(unsigned int)a2;

@end
