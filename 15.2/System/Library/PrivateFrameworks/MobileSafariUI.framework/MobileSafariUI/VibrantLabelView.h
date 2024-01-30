@class UIColor;

@interface VibrantLabelView : UILabel {
    UIColor *_nonVibrantTextColor;
    BOOL _usesVibrantAppearance;
}

- (void)_reduceTransparencyStatusDidChange:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTextColor:(id)a0;

@end
