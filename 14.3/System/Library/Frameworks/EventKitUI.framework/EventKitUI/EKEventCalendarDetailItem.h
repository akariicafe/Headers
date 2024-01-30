@class UITableViewCell, EKCalendar;

@interface EKEventCalendarDetailItem : EKEventDetailItem {
    EKCalendar *_calendar;
    UITableViewCell *_cell;
}

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)init;
- (void)_contentSizeCategoryChanged:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)editItemViewControllerSave:(id)a0;
- (BOOL)_calendarCanBeChanged;
- (BOOL)_shouldAllowViewingDetailsForCalendar:(id)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 withTraitCollection:(id)a1;

@end
