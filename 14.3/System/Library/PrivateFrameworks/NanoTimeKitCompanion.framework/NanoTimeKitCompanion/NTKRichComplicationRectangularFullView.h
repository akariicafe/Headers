@class NTKRichComplicationImageView;

@interface NTKRichComplicationRectangularFullView : NTKRichComplicationRectangularBaseView {
    NTKRichComplicationImageView *_imageView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setPaused:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
