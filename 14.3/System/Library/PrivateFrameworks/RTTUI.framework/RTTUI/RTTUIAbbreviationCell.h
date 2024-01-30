@class UILabel, UIVisualEffectView, UIView;

@interface RTTUIAbbreviationCell : UICollectionViewCell {
    UIView *_abbreviationContainer;
    UIVisualEffectView *_hintContainer;
}

@property (retain, nonatomic) UILabel *abbreviation;
@property (retain, nonatomic) UILabel *hint;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)accessibilityIgnoresInvertColors;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;
- (void)setAbbreviationData:(id)a0;
- (id)abbreviationText;

@end
