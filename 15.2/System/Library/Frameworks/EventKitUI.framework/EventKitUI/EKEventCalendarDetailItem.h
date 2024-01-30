@class UITableViewCell, EKCalendar;

@interface EKEventCalendarDetailItem : EKEventDetailItem {
    EKCalendar *_calendar;
    UITableViewCell *_cell;
}

- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (BOOL)_shouldAllowViewingDetailsForCalendar:(id)a0;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)_calendarCanBeChanged;
- (BOOL)minimalMode;
- (BOOL)eventViewController:(id)a0 shouldSelectSubitem:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 withTraitCollection:(id)a1;
- (void)reset;
- (void)_contentSizeCategoryChanged:(id)a0;

@end
