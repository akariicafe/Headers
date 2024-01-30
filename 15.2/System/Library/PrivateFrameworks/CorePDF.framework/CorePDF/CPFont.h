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

- (void)dispose;
- (double)maxWidth;
- (double)capHeight;
- (double)xHeight;
- (double)stemV;
- (double)stemH;
- (void)finalize;
- (double)fontWeight;
- (double)leading;
- (double)ascent;
- (unsigned int)flags;
- (double)descent;
- (double)spaceWidth;
- (double)underlinePosition;
- (id)fontName;
- (BOOL)isHorizontal;
- (void)dealloc;
- (struct CGFont { } *)cgFont;
- (double)underlineThickness;
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
