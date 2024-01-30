@class NTKColoringLabel;

@interface NTKRichComplicationRectangularLargeTextView : NTKRichComplicationRectangularLargeHeadlineBaseView {
    NTKColoringLabel *_line1Label;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;

@end
