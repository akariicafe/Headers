@class UILabel, NSMutableArray, UIFont;

@interface PXAnimatedCounter : UIView

@property (readonly) NSMutableArray *digitLabels;
@property (readonly) UILabel *backingLabel;
@property struct CGSize { double width; double height; } maxDigitSize;
@property unsigned long long animationsInProgress;
@property struct CGSize { double width; double height; } previousSize;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long number;

- (void)_updateSizeIfNeeded;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithNumber:(unsigned long long)a0;
- (id)_labelForDigit:(unsigned long long)a0;
- (void)_calculateLargestDigitSize;
- (unsigned long long)_numDigitsForNumber:(long long)a0;
- (id)_numberStringForNumber:(long long)a0;
- (void)_setCounterToNumber:(unsigned long long)a0;
- (void)_updateFramesForShownDigits;
- (double)_xOffsetForBackingLabel:(id)a0;
- (long long)preferredAnimationStyleForNumber:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })requiredSizeForNumber:(unsigned long long)a0;
- (void)setNumber:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setNumber:(unsigned long long)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)setNumber:(unsigned long long)a0 withAnimationStyle:(long long)a1 completionBlock:(id /* block */)a2;

@end
