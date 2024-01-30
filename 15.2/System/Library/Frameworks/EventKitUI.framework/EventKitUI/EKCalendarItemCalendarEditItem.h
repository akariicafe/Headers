@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {
    unsigned long long _entityType;
}

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)init;
- (BOOL)shouldAppearWithVisibility:(int)a0;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (BOOL)requiresReconfigurationOnSave;
- (id)initWithEntityType:(unsigned long long)a0;
- (BOOL)_shouldShowSourceForCalendar:(id)a0;

@end
