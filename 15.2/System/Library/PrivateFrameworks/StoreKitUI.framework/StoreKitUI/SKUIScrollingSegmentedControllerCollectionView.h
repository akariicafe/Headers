@protocol SKUIScrollingSegmentedControllerCollectionViewDelegate;

@interface SKUIScrollingSegmentedControllerCollectionView : SKUIViewControllerContainerCollectionView

@property (nonatomic) id<SKUIScrollingSegmentedControllerCollectionViewDelegate> delegate;
@property (readonly, nonatomic, getter=isPerformingLayout) BOOL performingLayout;

- (void)layoutSubviews;

@end
