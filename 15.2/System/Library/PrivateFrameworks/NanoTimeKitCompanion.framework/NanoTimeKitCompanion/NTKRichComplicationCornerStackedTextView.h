@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerStackedTextView : NTKRichComplicationCornerBaseTextView {
    NTKCurvedColoringLabel *_outerLabel;
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
- (id)outerLabel;

@end
