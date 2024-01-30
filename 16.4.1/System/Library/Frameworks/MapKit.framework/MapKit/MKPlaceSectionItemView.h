@interface MKPlaceSectionItemView : MKViewWithHairline

@property (nonatomic, getter=isHairlineFullWidth) BOOL fullWidthHairline;

- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateHairlineInsets;
- (void)infoCardThemeChanged;

@end
