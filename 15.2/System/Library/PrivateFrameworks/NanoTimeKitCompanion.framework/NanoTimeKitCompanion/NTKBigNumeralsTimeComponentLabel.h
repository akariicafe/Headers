@class UIFont, CLKFont, NSDate, CLKDevice, NSString, NTKColoringLabel, NSDateFormatter, UIColor;

@interface NTKBigNumeralsTimeComponentLabel : UIView {
    CLKDevice *_device;
    BOOL _useLigatures;
    CLKFont *_filledFont;
    CLKFont *_outlinedFont;
    NTKColoringLabel *_label;
    NTKColoringLabel *_transitioningLabel;
    NSDateFormatter *_formatter;
    unsigned long long _timeComponent;
    unsigned long long _fontVariant;
    NSString *_filledFontSectName;
    NSString *_outlinedFontSectName;
    const struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *_dsoHandle;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) UIFont *font;
@property (nonatomic) double fontSize;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long typeface;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIColor *color;

+ (id)localeForTypeface:(unsigned long long)a0;

- (void)layoutSubviews;
- (id)_fontForStyle:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_updateLabelText;
- (void)dealloc;
- (double)_lastLineBaseline;
- (void)setupFontsForVariant:(unsigned long long)a0 fontSize:(double)a1;
- (void)_updateLocale;
- (void)cleanupTransition;
- (id)_attributedStringForTypeface:(unsigned long long)a0;
- (id)initWithDevice:(id)a0 timeComponent:(unsigned long long)a1 fontVariant:(unsigned long long)a2 filledFontSectName:(id)a3 outlineFontSectName:(id)a4 dsoHandle:(const struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a5 fontSize:(double)a6 useLigatures:(BOOL)a7;
- (void)applyTransitionFraction:(double)a0 fromTypeface:(unsigned long long)a1 toTypeface:(unsigned long long)a2;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (void)applyTransitionFraction:(double)a0 fromColor:(id)a1 toColor:(id)a2;

@end
