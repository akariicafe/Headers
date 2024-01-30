@class UIColor;
@protocol EQKitLayout;

@interface EQKitiOSEquationView : UIView

@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (retain, nonatomic) id<EQKitLayout> equationLayout;
@property (nonatomic) double viewScale;
@property (nonatomic) double padding;
@property (copy, nonatomic) UIColor *textColor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
