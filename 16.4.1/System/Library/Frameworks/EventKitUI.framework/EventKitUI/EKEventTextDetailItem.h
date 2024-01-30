@class UITableViewCell;
@protocol EKEventDetailTextCellDelegate;

@interface EKEventTextDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    BOOL _cellNeedsUpdate;
}

@property (weak, nonatomic) id<EKEventDetailTextCellDelegate> textDelegate;

+ (id)moreButtonLabel;
+ (id /* block */)textFromEventBlock;
+ (id)titleForCell;
+ (id)titleForExtendedViewController;

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (id)textForExtendedViewController;
- (id)textForCopyAction;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (void)setCellPosition:(int)a0;
- (void)reset;
- (void)_updateCellIfNeeded;
- (unsigned long long)maximumNumberOfSubItems;
- (BOOL)requiresLayoutForSubitemCount;

@end
