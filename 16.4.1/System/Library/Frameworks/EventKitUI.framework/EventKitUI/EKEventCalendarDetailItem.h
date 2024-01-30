@class UIMenu, UITableViewCell, EKCalendar;

@interface EKEventCalendarDetailItem : EKEventDetailItem {
    EKCalendar *_calendar;
    UITableViewCell *_cell;
    UIMenu *_popupMenu;
}

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)eligibleCalendars;
- (BOOL)_calendarCanBeChanged;
- (id)popupMenu:(id)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 withTraitCollection:(id)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)dealloc;
- (BOOL)_shouldAllowViewingDetailsForCalendar:(id)a0;
- (id)init;
- (void)_contentSizeCategoryChanged:(id)a0;
- (BOOL)eventViewController:(id)a0 shouldSelectSubitem:(unsigned long long)a1;
- (BOOL)minimalMode;
- (void).cxx_destruct;
- (void)reset;

@end
