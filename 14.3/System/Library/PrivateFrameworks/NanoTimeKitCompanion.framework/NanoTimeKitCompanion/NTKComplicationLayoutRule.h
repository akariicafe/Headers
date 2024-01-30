@interface NTKComplicationLayoutRule : NTKLayoutRule

@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } keylinePadding;

+ (id)layoutRuleForDevice:(id)a0 withReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontalLayout:(long long)a2 verticalLayout:(long long)a3 keylinePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4;
+ (id)layoutRuleForDevice:(id)a0 withReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontalLayout:(long long)a2 verticalLayout:(long long)a3 keylinePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 clip:(BOOL)a5 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a6;
+ (id)layoutRuleForDevice:(id)a0 withReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontalLayout:(long long)a2 verticalLayout:(long long)a3 keylinePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 clip:(BOOL)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
