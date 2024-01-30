@class UIColor, UIFont, NSString, LPPointUnit, LPGlyphStyle, LPPadding;

@interface LPTextViewStyle : NSObject <NSCopying>

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSString *compositingFilter;
@property (nonatomic) unsigned int maximumLines;
@property (nonatomic) unsigned int maximumCharacters;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) LPPointUnit *firstLineLeading;
@property (retain, nonatomic) LPPointUnit *lastLineDescent;
@property (retain, nonatomic) LPGlyphStyle *leadingGlyph;
@property (readonly, retain, nonatomic) LPPadding *padding;
@property (retain, nonatomic) LPPointUnit *paragraphSpacing;
@property (nonatomic) BOOL shouldScaleMaximumLinesWithDynamicType;
@property (nonatomic) double fontScalingFactor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)adjustedForString:(id)a0;
- (void)_adjustForString:(id)a0;
- (id)initWithPlatform:(long long)a0 fontScalingFactor:(double)a1;

@end
