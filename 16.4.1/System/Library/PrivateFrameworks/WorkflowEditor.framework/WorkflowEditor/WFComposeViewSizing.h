@interface WFComposeViewSizing : NSObject

+ (struct CGSize { double x0; double x1; })drawerSizeFromParentSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 traitCollection:(id)a2;
+ (struct CGSize { double x0; double x1; })workflowViewSizeFromParentSize:(struct CGSize { double x0; double x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 traitCollection:(id)a2;
+ (double)constrainMaximumContentWidth:(double)a0 toSize:(struct CGSize { double x0; double x1; })a1 traitCollection:(id)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })moduleHorizontalInsetWithTraitCollection:(id)a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (double)moduleWidthForViewSize:(struct CGSize { double x0; double x1; })a0 maximumContentWidth:(double)a1 maximumModuleWidth:(double)a2 traitCollection:(id)a3 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4;
+ (struct CGSize { double x0; double x1; })sizeForRequestType:(unsigned long long)a0 parentSize:(struct CGSize { double x0; double x1; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 traitCollection:(id)a3;

@end
