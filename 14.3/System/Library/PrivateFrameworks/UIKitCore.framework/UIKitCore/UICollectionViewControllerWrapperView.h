@interface UICollectionViewControllerWrapperView : UIView

- (id)_deepestActionResponder;
- (id)preferredFocusedView;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (void)didMoveToSuperview;
- (id)_collectionViewController;

@end
