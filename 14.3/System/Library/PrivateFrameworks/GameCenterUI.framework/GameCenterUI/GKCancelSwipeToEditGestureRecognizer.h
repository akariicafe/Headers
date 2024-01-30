@class GKCollectionViewCell;

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer

@property (retain, nonatomic) GKCollectionViewCell *currentEditingCell;

- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
