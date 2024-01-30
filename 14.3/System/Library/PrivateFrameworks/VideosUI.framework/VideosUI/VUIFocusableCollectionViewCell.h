@interface VUIFocusableCollectionViewCell : UICollectionViewCell

@property (nonatomic) BOOL allowsFocus;

- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateBackgroundAndHighlightColor;

@end
