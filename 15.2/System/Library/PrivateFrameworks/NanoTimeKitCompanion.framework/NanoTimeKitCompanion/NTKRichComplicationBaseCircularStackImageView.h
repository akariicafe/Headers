@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularStackImageView : NTKRichComplicationCircularStackContentTextView

@property (retain, nonatomic) NTKRichComplicationImageView *line1ImageView;

- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (long long)tritiumUpdateMode;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)line1View;
- (id)line2TextProviderFromTemplate:(id)a0;

@end
