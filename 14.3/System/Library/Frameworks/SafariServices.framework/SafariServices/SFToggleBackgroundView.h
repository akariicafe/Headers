@interface SFToggleBackgroundView : UIView {
    struct CGSize { double width; double height; } _shapeSize;
    long long _cornerRoundingMode;
}

+ (Class)layerClass;

- (void)_setContinuousCornerRadius:(double)a0;
- (void)tintColorDidChange;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;

@end
