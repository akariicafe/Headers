@class CAGradientLayer, NSArray, NSDictionary, NSString, UIView;
@protocol CAMModeDialDataSource;

@interface CAMModeDial : UIControl <CAMAccessibilityHUDItemProvider>

@property (readonly, nonatomic) UIView *_selectedItemBackgroundView;
@property (retain, nonatomic, setter=_setModes:) NSArray *_modes;
@property (retain, nonatomic, setter=_setItems:) NSDictionary *_items;
@property (readonly, nonatomic) UIView *_meshTransformView;
@property (readonly, nonatomic) CAGradientLayer *_gradientLayer;
@property (readonly, nonatomic) UIView *_itemsContainerView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) id<CAMModeDialDataSource> dataSource;
@property (nonatomic) long long selectedMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)wantsVerticalModeDialForLayoutStyle:(long long)a0;

- (void)reloadData;
- (id)_fontForLayoutStyle:(long long)a0 selected:(BOOL)a1;
- (id)initWithLayoutStyle:(long long)a0;
- (void)_configureGradientForLayoutStyle:(long long)a0;
- (void)_layoutHorizontalModeDial;
- (void).cxx_destruct;
- (void)_updateForLayoutStyle;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (id)_horizontalMeshTransform;
- (struct CGPoint { double x0; double x1; })_verticalContainerCenterForMode:(long long)a0;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_layoutVerticalModeDial;
- (void)updateToContentSize:(id)a0;
- (struct CGPoint { double x0; double x1; })_horizontalContainerCenterForMode:(long long)a0;
- (double)_centeringNudgeForMode:(long long)a0;
- (void)layoutSubviews;
- (void)_updateSelectedItemBackgroundForLayoutStyle:(long long)a0;
- (void)_updateItemsForLayoutStyle:(long long)a0;
- (void)_configureMeshTransformForLayoutStyle:(long long)a0;
- (id)_selectedItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonCAMModeDialInitializationWithLayoutStyle:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (long long)_nearestCaptureModeForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setSelectedMode:(long long)a0 animated:(BOOL)a1;
- (void)_updateContainerCenterFromSelectedModeAnimated:(BOOL)a0;
- (id)_meshTransformForLayoutStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_interpolatedHorizontalMeshTransformSize;

@end
