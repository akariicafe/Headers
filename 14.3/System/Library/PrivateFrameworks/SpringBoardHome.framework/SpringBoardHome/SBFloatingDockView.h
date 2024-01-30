@class SBFloatingDockPlatterView, SBDockIconListView, UIView;
@protocol SBFloatingDockViewDelegate;

@interface SBFloatingDockView : SBFTouchPassThroughView

@property (class, readonly, nonatomic) double minimumPlatterMargin;

@property (retain, nonatomic) SBFloatingDockPlatterView *mainPlatterView;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UIView *touchReceivingView;
@property (nonatomic) double iconContentScale;
@property (weak, nonatomic) id<SBFloatingDockViewDelegate> delegate;
@property (readonly, nonatomic) double maximumDockContinuousCornerRadius;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumIconSize;
@property (readonly, nonatomic) double maximumPlatterHeight;
@property (readonly, nonatomic) double maximumInterIconSpacing;
@property (retain, nonatomic) SBDockIconListView *userIconListView;
@property (retain, nonatomic) SBDockIconListView *recentIconListView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingEdgeInsets;
@property (nonatomic) double platterVerticalMargin;
@property (nonatomic) unsigned long long minimumUserIconSpaces;
@property (readonly, nonatomic) double contentHeight;
@property (readonly, nonatomic) double interIconSpacing;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } platterFrame;
@property (nonatomic) BOOL hasPlatterShadow;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } platterShadowOutsets;

+ (double)_referenceInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (double)maximumInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (double)maximumDockContinuousCornerRadiusWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (struct CGSize { double x0; double x1; })maximumIconSizeWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (double)maximumPlatterHeightWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
+ (double)contentHeightForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mainPlatterViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)getMetrics:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; double x5; double x6; } *)a0 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 numberOfUserIcons:(unsigned long long)a2 numberOfRecentIcons:(unsigned long long)a3 paddingEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 referenceIconSize:(struct CGSize { double x0; double x1; })a5 maximumIconSize:(struct CGSize { double x0; double x1; })a6 referenceInterIconSpacing:(double)a7 maximumInterIconSpacing:(double)a8 platterVerticalMargin:(double)a9;

- (void)bounce;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)contentHeightForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })platterShadowOutsetsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })_iconImageInfo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDividerVisualStyling;
- (void)getMetrics:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; double x5; double x6; } *)a0 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })_referenceIconSize;
- (double)_referenceInterIconSpacing;
- (double)iconContentScaleForNumberOfUserIcons:(unsigned long long)a0;

@end
