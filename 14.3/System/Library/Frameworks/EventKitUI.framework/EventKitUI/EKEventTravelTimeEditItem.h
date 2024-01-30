@interface EKEventTravelTimeEditItem : EKEventEditItem {
    BOOL _isHidden;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)_updateHiddenState;
- (BOOL)forceRefreshStartAndEndDatesOnSave;
- (BOOL)isInline;
- (unsigned long long)numberOfSubitems;

@end
