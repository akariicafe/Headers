@class CLKUIColoringLabel, UIView;

@interface NTKRichComplicationRectangularHeadlineLargeBodyView : NTKRichComplicationRectangularBaseView {
    UIView *_body;
}

@property (retain, nonatomic) CLKUIColoringLabel *headerLabel;

- (id)body;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)headerTextProviderFromTemplate:(id)a0;
- (struct CGSize { double x0; double x1; })_bodySize;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
