@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerBaseTextView : NTKRichComplicationCornerView {
    NTKCurvedColoringLabel *_innerLabel;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (id)innerLabel;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;

@end
