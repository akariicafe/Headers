@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerBaseTextView : NTKRichComplicationCornerView {
    NTKCurvedColoringLabel *_innerLabel;
}

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)innerLabel;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;

@end
