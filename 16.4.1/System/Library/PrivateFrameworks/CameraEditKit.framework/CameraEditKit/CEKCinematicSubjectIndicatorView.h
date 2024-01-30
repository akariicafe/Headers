@class UIImageView, NSString, UIView;

@interface CEKCinematicSubjectIndicatorView : UIView <CAAnimationDelegate>

@property (readonly, nonatomic) UIImageView *_topLeftCornerView;
@property (readonly, nonatomic) UIImageView *_topRightCornerView;
@property (readonly, nonatomic) UIImageView *_bottomLeftCornerView;
@property (readonly, nonatomic) UIImageView *_bottomRightCornerView;
@property (readonly, nonatomic) UIImageView *_topCrosshairView;
@property (readonly, nonatomic) UIImageView *_leftCrosshairView;
@property (readonly, nonatomic) UIImageView *_bottomCrosshairView;
@property (readonly, nonatomic) UIImageView *_rightCrosshairView;
@property (readonly, nonatomic) UIView *_containerView;
@property (nonatomic) BOOL _crosshairsVisible;
@property (nonatomic) int _activeAnimationToActiveRoundedRectCount;
@property (nonatomic) long long shape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })minimumSuggestedBounds;
+ (id)_cornerImageWithResizableCapInsetsNamed:(id)a0;

- (void)_updateVisibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setShape:(long long)a0 animated:(BOOL)a1;
- (void)_performAnimationToActiveCorners;
- (void)_performAnimationToActiveRoundedRect;
- (void)_updateCornerImageViewsForThickness:(long long)a0 duration:(double)a1 delay:(double)a2;
- (void)_updateCornerViews;
- (void)_updateCrossHairViewsWithHeight:(double)a0;

@end
