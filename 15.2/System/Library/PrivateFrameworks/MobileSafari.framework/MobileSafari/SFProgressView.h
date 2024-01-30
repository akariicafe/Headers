@class UIColor, SFRingView, UIView;

@interface SFProgressView : UIView {
    SFRingView *_trackRing;
    SFRingView *_progressRing;
    UIView *_rectangularFillView;
}

@property (nonatomic) long long style;
@property (nonatomic) double progress;
@property (nonatomic) double radius;
@property (nonatomic) double trackWidth;
@property (retain, nonatomic) UIColor *trackTintColor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setProgress:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_updateRectangularProgressFill;

@end
