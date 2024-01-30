@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularImageView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKRichComplicationImageView *imageView;

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_updatePlatterColor;

@end
