@interface UICollectionViewControllerWrapperView : UIView

- (id)_deepestActionResponder;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (void)didMoveToSuperview;
- (id)_collectionViewController;
- (id)preferredFocusedView;

@end
