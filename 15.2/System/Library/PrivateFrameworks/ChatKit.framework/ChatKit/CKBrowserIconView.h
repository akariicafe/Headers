@class UIImage, CADisplayLink;

@interface CKBrowserIconView : UIView

@property (nonatomic) BOOL animating;
@property (nonatomic) double animationStartTime;
@property (nonatomic) double animationStartPercentComplete;
@property (nonatomic) double animationEndPercentComplete;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) double percentComplete;

+ (id)_pieImageForPercentComplete:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGPoint { double x0; double x1; })a2 radius:(double)a3;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_onDisplayLink:(id)a0;
- (void)setPercentComplete:(double)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
