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
@property (readonly, nonatomic) SEL renderSelector;
@property (nonatomic) double weight;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectWithColor:(id)a0 edges:(unsigned long long)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 weight:(double)a3;
+ (id)effectWithColor:(id)a0 edges:(unsigned long long)a1 inset:(double)a2 weight:(double)a3;

- (struct CGColor { } *)CGColor;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColor:(id)a0 edges:(unsigned long long)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 weight:(double)a3;
- (void)dealloc;

@end
