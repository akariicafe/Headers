@class NTKColoringImageView, NTKColoringLabel, UIView, CLKProgressProvider, NSNumber;
@protocol NTKComplicationImageView;

@interface NTKModularSmallRingTemplateView : NTKModularTemplateView {
    UIView<NTKComplicationImageView> *_imageView;
    float _level;
    CLKProgressProvider *_progressProvider;
    NSNumber *_progressUpdateToken;
}

@property (retain, nonatomic) NTKColoringImageView *stateRing;
@property (retain, nonatomic) NTKColoringLabel *label;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;
+ (id)supportedTemplateClasses;

- (void)_layoutContentView;
- (void).cxx_destruct;
- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIsXL:(BOOL)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateRingWithRingDescription:(id)a0;
- (void)_refreshRingImageWithRing:(id)a0;
- (void)_refreshRingImage;
- (void)_configureContentSubviews;
- (void)updateRingWithProgressProvider:(id)a0;

@end
