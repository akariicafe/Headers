@class NTKDateRichComplicationFullColorImageView;

@interface NTKDateRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKDateRichComplicationFullColorImageView *_dateView;
}

- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;

@end
