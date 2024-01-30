@class CAGradientLayer;

@interface PKPaletteToolPickerClippingEdgeView : UIView {
    CAGradientLayer *_gradientLayer;
    BOOL _flipHorizontally;
    long long _axis;
}

- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
