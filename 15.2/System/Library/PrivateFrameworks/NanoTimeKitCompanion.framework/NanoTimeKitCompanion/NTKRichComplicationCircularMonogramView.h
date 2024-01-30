@class NTKColoringLabel;

@interface NTKRichComplicationCircularMonogramView : NTKRichComplicationCircularBaseTextView {
    NTKColoringLabel *_textLabel;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (id)_labelFont;
- (void).cxx_destruct;
- (void)setComplicationTemplate:(id)a0 reason:(long long)a1;
- (id)_createLabelViewWithFont:(id)a0;

@end
