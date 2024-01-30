@class NSArray;

@interface EKEventAvailabilityEditItem : EKEventEditItem {
    long long _availability;
    unsigned long long _supportedAvailabilities;
    NSArray *_choices;
    unsigned long long _availabilityIndexInChoices;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;

@end
