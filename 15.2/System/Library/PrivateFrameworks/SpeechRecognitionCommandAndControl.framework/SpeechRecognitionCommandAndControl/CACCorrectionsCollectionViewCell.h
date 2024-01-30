@class UILabel, NSLayoutConstraint;

@interface CACCorrectionsCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;

- (void)setHighlighted:(BOOL)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end
