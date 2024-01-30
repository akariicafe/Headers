@class UITableViewCell;

@interface EKEventProposeNewTimeItem : EKEventDetailItem {
    UITableViewCell *_cell;
    BOOL _cellNeedsUpdate;
}

+ (BOOL)eventShowsProposeTime:(id)a0;

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (void)_updateCellIfNeededForWidth:(double)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)setCellPosition:(int)a0;
- (void).cxx_destruct;
- (void)reset;

@end
