@class NSArray, _UIBackdropView, UIImageView;

@interface AKCalloutBar : UIView {
    _UIBackdropView *_backgroundView;
    _UIBackdropView *_separatorBackgroundView;
    UIImageView *_blurMaskView;
    UIImageView *_tintMaskView;
    UIImageView *_separatorMaskView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _highlightRect;
}

@property (nonatomic) double arrowX;
@property (nonatomic) BOOL up;
@property (retain, nonatomic) NSArray *controls;

- (void).cxx_destruct;
- (void)setBlurDisabled:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0 forControl:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFitsControls:(id)a0;
- (id)newMaskView:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dividerLineRectForControl:(long long)a0;

@end
