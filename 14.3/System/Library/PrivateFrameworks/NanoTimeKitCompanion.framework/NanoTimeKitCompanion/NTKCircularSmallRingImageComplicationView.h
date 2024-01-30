@class CLKProgressProvider, NSNumber, UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView {
    UIView<NTKComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    NSNumber *_progressUpdateToken;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;
+ (double)_imageScaleForTemplate:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)updateRingWithProgressProvider:(id)a0;
- (void)_updateForTemplateChange;

@end
