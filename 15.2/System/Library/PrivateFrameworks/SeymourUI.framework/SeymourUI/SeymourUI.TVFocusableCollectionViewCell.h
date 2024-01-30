@interface SeymourUI.TVFocusableCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ underlyingControlState;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;

- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;

@end
