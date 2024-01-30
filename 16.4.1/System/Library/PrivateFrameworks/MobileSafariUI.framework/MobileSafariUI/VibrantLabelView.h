@class UIColor;

@interface VibrantLabelView : UILabel {
    UIColor *_nonVibrantTextColor;
    BOOL _usesVibrantAppearance;
}

- (void)setTextColor:(id)a0;
- (void)_reduceTransparencyStatusDidChange:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
