@class NTKColoringLabel;

@interface NTKRichComplicationBaseCircularStackTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKColoringLabel *line1Label;
@property (retain, nonatomic) NTKColoringLabel *line2Label;
@property (nonatomic) unsigned long long highlightMode;

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (id)_createAndAddLabel;
- (id)_desiredFontForLabel:(id)a0;
- (long long)_line1FilterStyle;
- (long long)_line2FilterStyle;

@end
