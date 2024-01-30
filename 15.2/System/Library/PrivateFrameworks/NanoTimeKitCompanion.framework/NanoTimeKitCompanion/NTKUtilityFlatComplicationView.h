@class NSString, UIImageView, NTKColoringLabel, UIView, NTKCurvedColoringLabel;
@protocol CLKMonochromeFilterProvider, NTKUtilityFlatComplicationViewDelegate, NTKComplicationImageView;

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView> {
    NTKCurvedColoringLabel *_curvedLabel;
    UIImageView *_curvedHighlightView;
    NTKColoringLabel *_activeLabel;
}

@property (nonatomic) double textWidthInRadians;
@property (weak, nonatomic) id<NTKUtilityFlatComplicationViewDelegate> delegate;
@property (nonatomic) double circleRadius;
@property (nonatomic) double maxAngularWidth;
@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;
@property (retain, nonatomic) NTKColoringLabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (void)circleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 interior:(BOOL *)a3 forPlacement:(unsigned long long)a4 forDevice:(id)a5;

- (void)setForegroundColor:(id)a0;
- (void)layoutSubviews;
- (void)setPlacement:(unsigned long long)a0;
- (unsigned long long)imagePlacement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (void)setShouldUseBackgroundPlatter:(BOOL)a0;
- (void)setUseBlockyHighlightCorners:(BOOL)a0;
- (void)setCanUseCurvedText:(BOOL)a0;
- (void)_updateForTemplateChange;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)a0;
- (double)_widthThatFits;
- (id)_backgroundPlatterImage;
- (void)_updateContentForMaxSizeChange;
- (void)_updateHighlightViewCornerRadius;
- (void)_updateLabelMaxWidth;
- (BOOL)_shouldLayoutWithImageView;
- (void)updateTextWidthIfNeeded;
- (struct CGSize { double x0; double x1; })boundingSizeOfCurrentComplicationTemplate;

@end
