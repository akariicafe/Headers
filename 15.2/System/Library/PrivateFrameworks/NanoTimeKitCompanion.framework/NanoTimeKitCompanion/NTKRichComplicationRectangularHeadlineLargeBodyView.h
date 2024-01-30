@class UIView, NTKColoringLabel;

@interface NTKRichComplicationRectangularHeadlineLargeBodyView : NTKRichComplicationRectangularBaseView {
    UIView *_body;
}

@property (retain, nonatomic) NTKColoringLabel *headerLabel;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (id)body;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)headerTextProviderFromTemplate:(id)a0;
- (void)_editingDidEnd;
- (struct CGSize { double x0; double x1; })_bodySize;

@end
