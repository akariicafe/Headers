@class UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView

@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)setUsesMediumLayout:(BOOL)a0;
- (void)_updateForTemplateChange;

@end
