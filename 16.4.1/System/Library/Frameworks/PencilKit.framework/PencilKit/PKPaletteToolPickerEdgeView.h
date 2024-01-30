@class CAGradientLayer;

@interface PKPaletteToolPickerEdgeView : UIView {
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_maskLayer;
    BOOL _isVerticalRight;
    BOOL _flipHorizontally;
    BOOL _flipVertically;
    long long _axis;
}

- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
