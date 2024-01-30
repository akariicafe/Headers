@class UIView, NTKColoringLabel;

@interface NTKRichComplicationCircularStackContentTextView : NTKRichComplicationCircularBaseView {
    UIView *_line1View;
    NTKColoringLabel *_line2Label;
}

@property (readonly, nonatomic) NTKColoringLabel *line2Label;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)line1View;
- (id)line2TextProviderFromTemplate:(id)a0;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;

@end
