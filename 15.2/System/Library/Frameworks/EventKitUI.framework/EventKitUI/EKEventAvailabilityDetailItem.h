@class NSArray, UITableViewCell;

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    long long _availability;
    unsigned long long _supportedAvailabilities;
    NSArray *_choices;
    unsigned long long _availabilityIndexInChoices;
}

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)setEvent:(id)a0 store:(id)a1;
- (BOOL)_canChangeAvailability;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void).cxx_destruct;
- (void)reset;

@end
