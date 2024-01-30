@class CLKProgressProvider, NSNumber, UIView;
@protocol CDComplicationImageView;

@interface NTKUtilitySmallRingImageComplicationView : NTKUtilitySmallRingComplicationView {
    UIView<CDComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    NSNumber *_progressUpdateToken;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)ringColor;
- (void)updateRingWithProgressProvider:(id)a0;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)a0;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateForTemplateChange;
- (void)_updateWithImageProvider:(id)a0;

@end
