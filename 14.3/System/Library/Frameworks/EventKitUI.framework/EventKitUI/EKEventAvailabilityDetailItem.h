@class NSArray, UITableViewCell;

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    long long _availability;
    unsigned long long _supportedAvailabilities;
    NSArray *_choices;
    unsigned long long _availabilityIndexInChoices;
}

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (BOOL)_canChangeAvailability;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)setEvent:(id)a0 store:(id)a1;

@end
