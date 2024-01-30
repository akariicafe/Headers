@class EKEventPrivacyLevelInlineEditItem, EKEventEditItem, EKEventAvailabilityEditItem;

@interface EKEventVisibilityEditItem : EKEventEditItem {
    EKEventAvailabilityEditItem *_availabilityEditItem;
    EKEventPrivacyLevelInlineEditItem *_privacyLevelEditItem;
    EKEventEditItem *_subitemOfLastDetailViewControllerRequested;
    unsigned long long _lastKnownNumberOfSubitems;
}

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)footerView;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)footerTitle;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (BOOL)shouldAppearWithVisibility:(int)a0;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (BOOL)requiresReconfigurationOnSave;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (BOOL)forceTableReloadOnSave;
- (id)_editItemForIndex:(unsigned long long)a0;
- (id)_lowestEditItem;
- (double)footerHeightForWidth:(double)a0;

@end
