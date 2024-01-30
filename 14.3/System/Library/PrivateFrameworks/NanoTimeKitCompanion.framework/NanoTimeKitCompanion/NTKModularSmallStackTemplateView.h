@class UIView, NTKOneColumnModularSmallLayoutAttributes, NTKColoringLabel;
@protocol NTKComplicationImageView;

@interface NTKModularSmallStackTemplateView : NTKModularTemplateView {
    NTKOneColumnModularSmallLayoutAttributes *_layoutAttributes;
}

@property (retain, nonatomic) NTKColoringLabel *titleLabel;
@property (retain, nonatomic) NTKColoringLabel *subtitleLabel;
@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_update;
- (void)_updateLayoutForLabel:(id)a0 baselineOffset:(double)a1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;

@end
