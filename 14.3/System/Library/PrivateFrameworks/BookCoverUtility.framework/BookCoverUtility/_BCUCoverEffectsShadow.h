@class NSString;

@interface _BCUCoverEffectsShadow : NSObject

@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) NSString *blendMode;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsCenter;
- (id)initWithImage:(struct CGImage { } *)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 blendMode:(id)a2;
- (id)initWithImage:(struct CGImage { } *)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })roundedInsetsWithSize:(struct CGSize { double x0; double x1; })a0;

@end
