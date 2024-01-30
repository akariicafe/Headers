@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {
    unsigned long long _entityType;
}

- (id)init;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)shouldAppearWithVisibility:(int)a0;
- (BOOL)editItemViewControllerSave:(id)a0;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (id)initWithEntityType:(unsigned long long)a0;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)_shouldShowSourceForCalendar:(id)a0;

@end
