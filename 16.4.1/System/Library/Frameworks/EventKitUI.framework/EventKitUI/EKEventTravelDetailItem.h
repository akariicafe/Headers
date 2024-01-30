@interface EKEventTravelDetailItem : EKEventDetailItem

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (BOOL)editItemViewControllerSave:(id)a0;
- (BOOL)_canChangeTravelTime;
- (id)generatePopupMenu;

@end
