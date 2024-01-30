@class EKDayPreviewController, EKEvent, EKUITableViewCell, NSDate;

@interface EKEventShowInCalendarDetailItem : EKEventDetailItem {
    EKUITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    EKEvent *_eventCopy;
}

@property (retain, nonatomic) NSDate *proposedTime;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)refreshCopiedEvents;
- (void)_datesForPreviewViewControllerWithStartDate:(id *)a0 endDate:(id *)a1;
- (void)_createNewEventCopy;
- (id)_dayPreviewViewController;
- (void)setEvent:(id)a0 store:(id)a1;

@end
