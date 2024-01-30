@class UILabel, UIVisualEffectView, UIView;

@interface RTTUIAbbreviationCell : UICollectionViewCell {
    UIView *_abbreviationContainer;
    UIVisualEffectView *_hintContainer;
}

@property (retain, nonatomic) UILabel *abbreviation;
@property (retain, nonatomic) UILabel *hint;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityIgnoresInvertColors;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)setAbbreviationData:(id)a0;
- (id)abbreviationText;

@end
