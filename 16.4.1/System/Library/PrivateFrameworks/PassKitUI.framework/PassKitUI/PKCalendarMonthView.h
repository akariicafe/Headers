@class NSString, NSArray, PKCalendarDayView, UIView;

@interface PKCalendarMonthView : UIView <PKCalendarDayViewDelegate> {
    NSArray *_dayViews;
    NSArray *_weekdayHeaders;
    PKCalendarDayView *_selectedDayView;
    UIView *_headerView;
    UIView *_headerSeparatorView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)calendarDayViewTapped:(id)a0 withDate:(id)a1;
- (void)_formViewsWithDataSource:(id)a0 appearance:(id)a1 headerView:(id)a2;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)configureWithDataSource:(id)a0 appearance:(id)a1 headerView:(id)a2;

@end
