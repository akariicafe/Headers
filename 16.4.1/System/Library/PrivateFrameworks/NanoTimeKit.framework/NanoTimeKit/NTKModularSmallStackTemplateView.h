@class CLKUIColoringLabel, NTKOneColumnModularSmallLayoutAttributes, UIView;
@protocol CDComplicationImageView;

@interface NTKModularSmallStackTemplateView : NTKModularTemplateView {
    NTKOneColumnModularSmallLayoutAttributes *_layoutAttributes;
}

@property (retain, nonatomic) CLKUIColoringLabel *titleLabel;
@property (retain, nonatomic) CLKUIColoringLabel *subtitleLabel;
@property (retain, nonatomic) UIView<CDComplicationImageView> *imageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)_update;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateLayoutForLabel:(id)a0 baselineOffset:(double)a1;

@end
