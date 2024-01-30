@class UIColor, UIFont, NSDateFormatter, NTKColoringLabel, NSDate, CLKDevice;

@interface NTKBigNumeralsTimeComponentLabel : UIView {
    CLKDevice *_device;
    BOOL _useLigatures;
    UIFont *_filledFont;
    UIFont *_outlinedFont;
    NTKColoringLabel *_label;
    NTKColoringLabel *_transitioningLabel;
    NSDateFormatter *_formatter;
    unsigned long long _timeComponent;
    unsigned long long _fontVariant;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) UIFont *font;
@property (nonatomic) double fontSize;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long typeface;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_fontForStyle:(unsigned long long)a0;
- (double)_lastLineBaseline;
- (void)_updateLabelText;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)applyTransitionFraction:(double)a0 fromTypeface:(unsigned long long)a1 toTypeface:(unsigned long long)a2;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (void)applyTransitionFraction:(double)a0 fromColor:(id)a1 toColor:(id)a2;
- (void)cleanupTransition;
- (id)initWithDevice:(id)a0 timeComponent:(unsigned long long)a1 fontVariant:(unsigned long long)a2 fontSize:(double)a3 useLigatures:(BOOL)a4;
- (void)_updateLocale;
- (void)setupFontsForVariant:(unsigned long long)a0 fontSize:(double)a1;
- (id)_attributedStringForTypeface:(unsigned long long)a0;

@end
