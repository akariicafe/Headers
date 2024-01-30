@class UILabel, NSLayoutConstraint;

@interface CACCorrectionsCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
