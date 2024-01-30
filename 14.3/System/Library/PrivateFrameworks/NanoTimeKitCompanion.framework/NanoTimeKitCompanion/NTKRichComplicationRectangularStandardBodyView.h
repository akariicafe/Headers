@class NTKColoringLabel;

@interface NTKRichComplicationRectangularStandardBodyView : NTKRichComplicationRectangularLargeHeadlineBaseView {
    NTKColoringLabel *_line1Label;
    NTKColoringLabel *_line2Label;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;

@end
