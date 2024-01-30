@interface UICollectionViewControllerWrapperView : UIView

- (id)_deepestActionResponder;
- (void)didMoveToSuperview;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (id)_collectionViewController;
- (id)preferredFocusedView;

@end
