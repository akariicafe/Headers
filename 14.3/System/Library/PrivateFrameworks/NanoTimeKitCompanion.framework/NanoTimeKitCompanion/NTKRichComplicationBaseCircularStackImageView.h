@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularStackImageView : NTKRichComplicationCircularStackContentTextView

@property (retain, nonatomic) NTKRichComplicationImageView *line1ImageView;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)line1View;
- (id)line2TextProviderFromTemplate:(id)a0;

@end
