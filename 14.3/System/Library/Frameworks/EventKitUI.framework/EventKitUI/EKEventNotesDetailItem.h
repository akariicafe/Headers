@class UITableViewCell;
@protocol EKEventDetailNotesCellDelegate;

@interface EKEventNotesDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    BOOL _cellNeedsUpdate;
}

@property (weak, nonatomic) id<EKEventDetailNotesCellDelegate> noteDelegate;

- (void)setCellPosition:(int)a0;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (unsigned long long)maximumNumberOfSubItems;
- (BOOL)requiresLayoutForSubitemCount;
- (unsigned long long)numberOfSubitems;
- (void)_updateCellIfNeeded;

@end
