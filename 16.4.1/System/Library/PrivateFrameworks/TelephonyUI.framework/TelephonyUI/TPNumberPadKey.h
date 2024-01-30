@class UILabel, NSLayoutConstraint;

@interface TPNumberPadKey : UIView

@property (readonly, nonatomic, getter=isAsterisk) BOOL asterisk;
@property (readonly, nonatomic, getter=isPound) BOOL pound;
@property (retain, nonatomic) UILabel *digit;
@property (retain, nonatomic) UILabel *letters;
@property (retain, nonatomic) UILabel *secondaryLetters;
@property (retain, nonatomic) NSLayoutConstraint *digitBaseline;
@property (retain, nonatomic) NSLayoutConstraint *letterBaseline;
@property (retain, nonatomic) NSLayoutConstraint *secondaryLetterBaseline;

+ (void)initialize;
+ (float)absoluteTrackingValueForString:(id)a0 pointSize:(float)a1 unitsPerEm:(float)a2;

- (double)secondaryLetterFontSizeForScreenSizeCategory:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doLayoutNow;
- (void)setDigit:(id)a0 primaryLetters:(id)a1 secondaryLetters:(id)a2;
- (double)letterFontSizeForScreenSizeCategory:(unsigned long long)a0 language:(unsigned long long)a1 showLocalizedLetters:(BOOL)a2;
- (void)setFontStylesForHighlightState:(BOOL)a0 language:(unsigned long long)a1 showLocalizedLetters:(BOOL)a2 shouldCenterDigit:(BOOL)a3 fontColor:(BOOL)a4 circleDiameter:(double)a5 isCarPlay:(BOOL)a6 screenSizeCategory:(unsigned long long)a7;
- (double)digitFontSizeForScreenSizeCategory:(unsigned long long)a0 language:(unsigned long long)a1 showLocalizedLetters:(BOOL)a2;
- (void).cxx_destruct;
- (void)updateBaselineConstraintConstantsFor:(unsigned long long)a0 language:(unsigned long long)a1 showLocalizedLetters:(BOOL)a2;

@end
