@class UIView, NSString, UIToolbar;
@protocol _UIBarAppearanceChangeObserver;

@interface _UIToolbarVisualProvider : NSObject

@property (readonly, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIView *customBackgroundView;
@property (readonly, nonatomic) UIView *currentBackgroundView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backgroundFrame;
@property (readonly, nonatomic) BOOL toolbarIsSmall;
@property (nonatomic) long long itemDistribution;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) BOOL useModernAppearance;
@property (readonly, nonatomic) id<_UIBarAppearanceChangeObserver> appearanceObserver;

- (void)updateBackgroundGroupName;
- (void)updateItemsForNewFrame:(id)a0;
- (void)updateBarForStyle:(long long)a0;
- (void)prepare;
- (void)updateAppearance;
- (void)updateBarBackgroundSize;
- (void).cxx_destruct;
- (id)initWithToolbar:(id)a0;
- (void)updateArchivedSubviews:(id)a0;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)a0;
- (void)updateBarBackground;
- (void)updateWithItems:(id)a0 fromOldItems:(id)a1 animate:(BOOL)a2;
- (void)customViewChangedForButtonItem:(id)a0;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)a0;
- (void)drawBackgroundViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
