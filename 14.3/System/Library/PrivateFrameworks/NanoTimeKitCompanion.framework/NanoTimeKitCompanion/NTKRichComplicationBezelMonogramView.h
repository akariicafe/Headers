@class NTKColoringLabel;

@interface NTKRichComplicationBezelMonogramView : NTKRichComplicationBezelBaseTextView {
    NTKColoringLabel *_textLabel;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void).cxx_destruct;
- (id)_labelFont;
- (void)setComplicationTemplate:(id)a0 reason:(long long)a1;
- (id)_createLabelViewWithFont:(id)a0;

@end
