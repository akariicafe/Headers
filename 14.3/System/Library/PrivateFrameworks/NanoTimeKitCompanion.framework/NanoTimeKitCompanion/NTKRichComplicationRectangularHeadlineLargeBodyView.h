@class UIView, NTKColoringLabel;

@interface NTKRichComplicationRectangularHeadlineLargeBodyView : NTKRichComplicationRectangularBaseView {
    UIView *_body;
}

@property (retain, nonatomic) NTKColoringLabel *headerLabel;

- (id)body;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)headerTextProviderFromTemplate:(id)a0;
- (void)_editingDidEnd;

@end
