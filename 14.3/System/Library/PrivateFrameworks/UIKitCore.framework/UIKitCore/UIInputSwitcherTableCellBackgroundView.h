@interface UIInputSwitcherTableCellBackgroundView : UIView

@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL drawsOpaque;
@property (nonatomic) BOOL drawsBorder;
@property (nonatomic) BOOL usesDarkTheme;
@property (nonatomic) unsigned long long roundedCorners;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
