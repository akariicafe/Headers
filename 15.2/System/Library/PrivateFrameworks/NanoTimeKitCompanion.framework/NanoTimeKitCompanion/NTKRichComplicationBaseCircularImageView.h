@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularImageView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKRichComplicationImageView *imageView;

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (long long)tritiumUpdateMode;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_updatePlatterColor;

@end
