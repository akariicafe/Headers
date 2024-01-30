@class UIKBGradient, NSString;

@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect> {
    NSString *_colorName;
}

@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) UIKBGradient *gradient;
@property (nonatomic) double opacity;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL renderUnder;
@property (nonatomic) double weight;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectWithColor:(id)a0 edges:(unsigned long long)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 weight:(double)a3;
+ (id)effectWithColor:(id)a0 edges:(unsigned long long)a1 inset:(double)a2 weight:(double)a3;

- (struct CGColor { } *)CGColor;
- (id)initWithColor:(id)a0 edges:(unsigned long long)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 weight:(double)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)renderEffectWithRenderer:(id)a0 traits:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
