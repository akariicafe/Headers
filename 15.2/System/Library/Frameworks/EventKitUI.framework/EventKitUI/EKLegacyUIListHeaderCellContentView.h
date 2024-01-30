@interface EKLegacyUIListHeaderCellContentView : UIView {
    double _date;
    BOOL _indentsForDots;
}

@property (nonatomic) BOOL showWeekNumber;
@property (nonatomic) double date;
@property (nonatomic) BOOL indentsForDots;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForOffetTextShadow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_normalTextColor;
- (id)_normalTextShadowColor;
- (void)drawTitle:(id)a0 withColor:(id)a1 withShadowColor:(id)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)_weekNumberFont;

@end
