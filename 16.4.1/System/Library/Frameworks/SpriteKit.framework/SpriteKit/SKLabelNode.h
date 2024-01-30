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
+ (id)_labelNodeWithFontNamed:(id)a0;
+ (id)_labelNodeWithFontTexture:(id)a0 fontDataString:(id)a1;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;
+ (id)labelNodeWithAttributedText:(id)a0;
+ (id)labelNodeWithFontNamed:(id)a0;
+ (id)labelNodeWithText:(id)a0;

- (id)attributedString;
- (void)encodeWithCoder:(id)a0;
- (void)setFont:(struct __CTFont { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)a0;
- (void)_initialize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)init;
- (id)description;
- (BOOL)isEqualToNode:(id)a0;
- (id)_getTextSprites;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (id)initWithFontNamed:(id)a0;
- (void)setUIFont:(id)a0;

@end
