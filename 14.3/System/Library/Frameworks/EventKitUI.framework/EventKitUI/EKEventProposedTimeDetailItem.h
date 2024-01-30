@class NSArray, NSMutableDictionary;

@interface EKEventProposedTimeDetailItem : EKEventDetailItem {
    NSMutableDictionary *_cellForAttendee;
    NSArray *_attendeesWithProposedTimes;
    BOOL _visibilityChanged;
}

- (void)setCellPosition:(int)a0;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)detailItemVisibilityChanged;
- (unsigned long long)numberOfSubitems;
- (void)_updateCellsIfNeededForWidth:(double)a0;
- (id)attendeeForIndex:(unsigned long long)a0;

@end
