@class UIColor, NSString, NSShadow, NSNumber;

@interface VUITextLayout : NSObject <NSCopying>

@property (nonatomic) long long textStyle;
@property (retain, nonatomic) NSString *fontFamily;
@property (nonatomic) long long fontWeight;
@property (nonatomic) double fontSize;
@property (nonatomic) long long fontFeature;
@property (nonatomic) long long highlightStyle;
@property (nonatomic) BOOL shouldUpdateTextColor;
@property (nonatomic) long long textTransform;
@property (nonatomic) long long alignment;
@property (nonatomic) BOOL allowsTextAlignmentOverride;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) unsigned long long numberOfLinesAXSmall;
@property (nonatomic) unsigned long long numberOfLinesAXLarge;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) NSNumber *letterSpacing;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL shouldAllowParagraphHyphenation;
@property (nonatomic) int blendMode;
@property (nonatomic) BOOL alwaysFocusable;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *highlightOrSelectedColor;
@property (retain, nonatomic) UIColor *seeMoreTextColor;
@property (nonatomic) unsigned int fontTraits;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (nonatomic) unsigned long long maximumContentSizeCategory;
@property (retain, nonatomic) UIColor *darkColor;
@property (retain, nonatomic) UIColor *darkHighlightOrSelectedColor;
@property (retain, nonatomic) UIColor *darkSeeMoreTextColor;
@property (nonatomic) double minimumScaleFactor;
@property (retain, nonatomic) NSString *compositingFilter;
@property (retain, nonatomic) NSString *darkCompositingFilter;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setColorWithOpacityType:(long long)a0;
- (id)_defaultParagraphStyle;
- (id)attributedStringWithString:(id)a0 view:(id)a1;
- (id)attributedStringWithAttributedString:(id)a0 view:(id)a1 updateTextColor:(BOOL)a2;
- (id)defaultAttributesForLabel:(id)a0;
- (unsigned long long)numberOfLinesForTraitCollection:(id)a0;
- (id)attributedStringWithString:(id)a0;

@end
