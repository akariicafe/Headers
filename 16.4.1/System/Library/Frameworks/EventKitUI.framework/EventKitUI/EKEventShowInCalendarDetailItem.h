@class EKDayPreviewController, EKEvent, CalendarModel, EKUITableViewCell, NSDate;

@interface EKEventShowInCalendarDetailItem : EKEventDetailItem {
    EKUITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    EKEvent *_eventCopy;
    CalendarModel *_model;
}

@property (retain, nonatomic) NSDate *proposedTime;

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)initWithModel:(id)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)refreshCopiedEvents;
- (void)_createNewEventCopy;
- (void)_datesForPreviewViewControllerWithStartDate:(id *)a0 endDate:(id *)a1;
- (id)_dayPreviewViewController;
- (void).cxx_destruct;
- (void)setEvent:(id)a0 store:(id)a1;
- (void)reset;

@end
