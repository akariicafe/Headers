@interface VUIFocusableCollectionViewCell : UICollectionViewCell

@property (nonatomic) BOOL allowsFocus;

- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)_updateBackgroundAndHighlightColor;

@end
