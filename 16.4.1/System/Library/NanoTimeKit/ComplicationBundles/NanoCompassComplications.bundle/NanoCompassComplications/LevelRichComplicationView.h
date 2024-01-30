@class UIView;

@interface LevelRichComplicationView : NanoCompassBaseRichView {
    UIView *_fixedOverlayView;
    UIView *_fixedBubbleView;
    UIView *_floatingBubbleView;
    struct CGVector { double dx; double dy; } _floatingBubbleDeflection;
}

@property (readonly, nonatomic) UIView *fixedOverlayView;
@property (readonly, nonatomic) UIView *fixedBubbleView;
@property (readonly, nonatomic) UIView *floatingBubbleView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (double)_magnitudeLevelThreshold;
- (double)_maxBubbleDeflection;
- (id)_newFixedBubbleView;
- (id)_newFixedOverlayView;
- (id)_newFloatingBubbleView;

@end
