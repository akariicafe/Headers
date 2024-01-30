@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilityImageAndLabelsComplicationView : NTKUtilityComplicationView

@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;
@property (retain, nonatomic) NTKColoringLabel *firstLabel;
@property (retain, nonatomic) NTKColoringLabel *secondLabel;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)a0;
- (double)_widthThatFits;
- (void)_updateContentForMaxSizeChange;
- (BOOL)_shouldLayoutWithImageView;
- (void)_layoutSubviewsHorizontally:(id)a0;
- (void)_updateFirstLabelMaxSize;
- (BOOL)_isViewVisible:(id)a0;
- (double)_gapBetweenView:(id)a0 nextView:(id)a1;
- (void)_setLabelTextProvider:(id)a0;
- (void)_setLabelText:(id)a0;
- (void)_setLabelAttributedText:(id)a0;
- (void)_setSecondLabelText:(id)a0;
- (void)_updateWithImageProvider:(id)a0;

@end
