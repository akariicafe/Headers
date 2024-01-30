@class UIColor, NTKFaceColorScheme, NSString, UIView, NTKContainerView, CLKDevice;
@protocol CLKMonochromeFilterProvider;

@interface NTKModuleView : UIControl <NTKContainerViewLayoutDelegate, NTKControl, CLKMonochromeComplicationView> {
    UIView *_highlightView;
}

@property (readonly, nonatomic) NTKContainerView *contentView;
@property (nonatomic) double highlightCornerRadius;
@property (retain, nonatomic) UIColor *overrideColor;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *secondaryForegroundColor;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;
@property (nonatomic) double contentHeight;
@property (nonatomic) double contentHeightOffset;
@property (nonatomic) double highlightAlpha;
@property (retain, nonatomic) NTKFaceColorScheme *colorScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

+ (double)_defaultCornerRadiusForDevice:(id)a0;
+ (double)cornerRadiusForComplicationFamily:(long long)a0 forDevice:(id)a1;

- (void)_updateColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutContainerView:(id)a0;
- (void)layoutSubviews;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (BOOL)shouldCancelTouchesInScrollview;
- (void)_applyMonochromeTransitionFraction:(double)a0 fromFaceColorPalette:(id)a1 toFaceColorPalette:(id)a2;
- (void)_enumerateAllForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)applyColorScheme:(id)a0;
- (void)applyFaceColorPalette:(id)a0 units:(unsigned long long)a1;
- (void)applyTransitionFraction:(double)a0 fromFaceColorPalette:(id)a1 toFaceColorPalette:(id)a2 units:(unsigned long long)a3 brightenedUnits:(unsigned long long)a4;
- (void)naturalHorizontalLayoutForViewsAndSpacing:(id)a0 columnAlignmentSpacing:(BOOL)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)viewsAndSpacingArrayForSpace:(double)a0 view:(id)a1;
- (id)viewsAndSpacingArrayForSpace:(double)a0 view:(id)a1 space:(double)a2 view:(id)a3;

@end
