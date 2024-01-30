@interface CHUISMutableWidgetVisibilitySettings : CHUISWidgetVisibilitySettings

@property (nonatomic, getter=isSettled) BOOL settled;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;

- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSettled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
