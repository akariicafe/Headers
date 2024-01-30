@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerCircularImageView : NTKRichComplicationCornerBaseCircularView {
    NTKRichComplicationImageView *_imageView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)_circularView;
- (void)_updatePlatterColor;

@end
