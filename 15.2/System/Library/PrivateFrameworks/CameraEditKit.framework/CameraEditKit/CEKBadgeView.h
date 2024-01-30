@class UIColor;
@protocol CEKBadgeViewDelegate;

@interface CEKBadgeView : UIView

@property (nonatomic, setter=_setFillCornerRadius:) double _fillCornerRadius;
@property (retain, nonatomic, setter=_setFillColor:) UIColor *_fillColor;
@property (retain, nonatomic, setter=_setContentColor:) UIColor *_contentColor;
@property (weak, nonatomic) id<CEKBadgeViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_maskImage;
- (id)_invertMaskImage:(id)a0;

@end
