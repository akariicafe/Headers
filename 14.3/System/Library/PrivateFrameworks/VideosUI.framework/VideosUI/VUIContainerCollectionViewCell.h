@interface VUIContainerCollectionViewCell : UICollectionViewCell {
    BOOL _pressIsAnimating;
    BOOL _unpressOnEndAnimating;
}

@property (nonatomic) BOOL allowsFocus;
@property (nonatomic) BOOL selectSubviews;

- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)prepareForReuse;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_showPressState;
- (void)_clearPressState;

@end
