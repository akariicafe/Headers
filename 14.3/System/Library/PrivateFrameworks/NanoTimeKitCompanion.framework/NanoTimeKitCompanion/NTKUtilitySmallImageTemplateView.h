@class UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilitySmallImageTemplateView : NTKUtilityCircularComplicationView {
    BOOL _needsLayoutContent;
}

@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)_layoutContentView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateForTemplateChange;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)a0;
- (void)_setNeedsLayoutContent;

@end
