@class EKDayPreviewController, EKEvent, UITableViewCell, NSDate;

@interface EKEventPreviewDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    EKEvent *_eventCopy;
}

@property (nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;
@property (retain, nonatomic) NSDate *proposedTime;

- (void)refreshCopiedEvents;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)eventViewController:(id)a0 didSelectReadOnlySubitem:(unsigned long long)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)setEvent:(id)a0 store:(id)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (void)_datesForPreviewViewControllerWithStartDate:(id *)a0 endDate:(id *)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_dayPreviewViewController;
- (void)reset;
- (void)_createNewEventCopy;

@end
