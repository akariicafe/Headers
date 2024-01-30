@class UILabel, NSMutableArray, UIFont;

@interface PXAnimatedCounter : UIView

@property (readonly) NSMutableArray *digitLabels;
@property (readonly) UILabel *backingLabel;
@property struct CGSize { double width; double height; } maxDigitSize;
@property unsigned long long animationsInProgress;
@property struct CGSize { double width; double height; } previousSize;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long number;

- (void)layoutSubviews;
- (void)commonInit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithNumber:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_updateSizeIfNeeded;
- (void)setNumber:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setNumber:(unsigned long long)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)setNumber:(unsigned long long)a0 withAnimationStyle:(long long)a1 completionBlock:(id /* block */)a2;
- (long long)preferredAnimationStyleForNumber:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })requiredSizeForNumber:(unsigned long long)a0;
- (double)_xOffsetForBackingLabel:(id)a0;
- (unsigned long long)_numDigitsForNumber:(long long)a0;
- (id)_numberStringForNumber:(long long)a0;
- (void)_setCounterToNumber:(unsigned long long)a0;
- (void)_calculateLargestDigitSize;
- (void)_updateFramesForShownDigits;
- (id)_labelForDigit:(unsigned long long)a0;

@end
