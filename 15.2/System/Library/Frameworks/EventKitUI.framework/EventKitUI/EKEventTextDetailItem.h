@class UITableViewCell;
@protocol EKEventDetailTextCellDelegate;

@interface EKEventTextDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    BOOL _cellNeedsUpdate;
}

@property (weak, nonatomic) id<EKEventDetailTextCellDelegate> textDelegate;

+ (id)titleForCell;
+ (id /* block */)textFromEventBlock;
+ (id)moreButtonLabel;
+ (id)titleForExtendedViewController;

- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)setCellPosition:(int)a0;
- (id)textForExtendedViewController;
- (void).cxx_destruct;
- (id)textForCopyAction;
- (unsigned long long)numberOfSubitems;
- (void)reset;
- (void)_updateCellIfNeeded;
- (BOOL)requiresLayoutForSubitemCount;
- (unsigned long long)maximumNumberOfSubItems;

@end
