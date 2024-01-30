@class NSTimeZone;

@interface EKLegacyUIListHeaderCellContentView : UIView {
    double _date;
    BOOL _indentsForDots;
}

@property (nonatomic) BOOL showWeekNumber;
@property (nonatomic) double date;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL indentsForDots;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_weekNumberFont;
- (id)_normalTextColor;
- (id)_normalTextShadowColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForOffetTextShadow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTitle:(id)a0 withColor:(id)a1 withShadowColor:(id)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
