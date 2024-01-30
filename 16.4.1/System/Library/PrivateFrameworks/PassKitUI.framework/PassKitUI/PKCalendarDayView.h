@class UITapGestureRecognizer, NSDate, PKCalendarDayLabelView, UIView;
@protocol PKCalendarDayViewDelegate;

@interface PKCalendarDayView : UIView {
    NSDate *_date;
    id<PKCalendarDayViewDelegate> _delegate;
    PKCalendarDayLabelView *_dayLabelView;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (retain, nonatomic) UIView *decorationView;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (nonatomic) BOOL hideDayLabel;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_viewTapped;
- (id)initWithDate:(id)a0 dayString:(id)a1 delegate:(id)a2;
- (double)verticalMarginWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
