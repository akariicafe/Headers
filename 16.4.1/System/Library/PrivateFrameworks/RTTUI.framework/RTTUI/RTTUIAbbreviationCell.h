@class UILabel, UIVisualEffectView, UIView;

@interface RTTUIAbbreviationCell : UICollectionViewCell {
    UIView *_abbreviationContainer;
    UIVisualEffectView *_hintContainer;
}

@property (retain, nonatomic) UILabel *abbreviation;
@property (retain, nonatomic) UILabel *hint;

- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityIgnoresInvertColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setAbbreviationData:(id)a0;
- (id)abbreviationText;

@end
