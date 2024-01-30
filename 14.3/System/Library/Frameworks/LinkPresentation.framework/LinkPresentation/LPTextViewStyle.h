@class UIColor, UIFont, LPPointUnit, LPGlyphStyle, LPPadding;

@interface LPTextViewStyle : NSObject <NSCopying>

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned int maximumLines;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) LPPointUnit *firstLineLeading;
@property (retain, nonatomic) LPPointUnit *lastLineDescent;
@property (retain, nonatomic) LPGlyphStyle *leadingGlyph;
@property (readonly, retain, nonatomic) LPPadding *padding;
@property (nonatomic) BOOL shouldScaleMaximumLinesWithDynamicType;

- (id)initWithPlatform:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)adjustedForString:(id)a0;

@end
