@class UIKBGradient, NSString;

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {
    NSString *_colorName;
}

@property (nonatomic) struct CGSize { double width; double height; } offset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } concaveInsets;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL renderUnder;
@property (readonly, nonatomic) SEL renderSelector;
@property (nonatomic) double weight;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (readonly, nonatomic) UIKBGradient *gradient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectWithColor:(id)a0 offset:(struct CGSize { double x0; double x1; })a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 weight:(double)a3;

- (struct CGColor { } *)CGColor;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithColor:(id)a0 offset:(struct CGSize { double x0; double x1; })a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 weight:(double)a3;

@end
