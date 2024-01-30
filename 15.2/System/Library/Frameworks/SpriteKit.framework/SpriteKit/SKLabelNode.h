@class NSString, NSAttributedString, UIColor;

@interface SKLabelNode : SKNode {
    void *_skcLabelNode;
}

@property (nonatomic) long long verticalAlignmentMode;
@property (nonatomic) long long horizontalAlignmentMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) double colorBlendFactor;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long blendMode;

+ (BOOL)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;
+ (id)labelNodeWithFontNamed:(id)a0;
+ (id)labelNodeWithText:(id)a0;
+ (id)labelNodeWithAttributedText:(id)a0;
+ (id)_labelNodeWithFontNamed:(id)a0;
+ (id)_labelNodeWithFontTexture:(id)a0 fontDataString:(id)a1;

- (id)attributedString;
- (void)setFont:(struct __CTFont { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_initialize;
- (id)copy;
- (BOOL)isEqualToNode:(id)a0;
- (void *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)_getTextSprites;
- (void)setUIFont:(id)a0;
- (id)initWithFontNamed:(id)a0;

@end
