@class UIColor, MKVibrantView;

@interface MKViewWithHairline : UIView {
    MKVibrantView *_bottomHairline;
    MKVibrantView *_topHairline;
}

@property (retain, nonatomic) UIColor *hairlineColor;
@property (nonatomic) double leftHairlineInset;
@property (nonatomic) double rightHairlineInset;
@property (nonatomic, getter=isTopHairlineHidden) BOOL topHairlineHidden;
@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
