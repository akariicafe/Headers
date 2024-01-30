@class UILabel, UIView;

@interface _HKMonthTitleView : UIView <HKCalendarMonthTitleFormatting> {
    UIView *_dividerLine;
}

@property (retain, nonatomic) UILabel *monthTitle;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double dividerOriginX;
@property (nonatomic) double dividerWidth;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFont;
- (void)setDate:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_monthStringFromDate:(id)a0;

@end
