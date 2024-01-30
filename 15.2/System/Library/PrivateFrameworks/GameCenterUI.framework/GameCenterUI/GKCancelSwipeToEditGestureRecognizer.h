@class GKCollectionViewCell;

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer

@property (retain, nonatomic) GKCollectionViewCell *currentEditingCell;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
