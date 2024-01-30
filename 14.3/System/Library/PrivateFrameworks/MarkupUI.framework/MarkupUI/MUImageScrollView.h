@protocol MUImageScrollViewDelegate;

@interface MUImageScrollView : UIScrollView

@property (weak, nonatomic) id<MUImageScrollViewDelegate> delegate;

- (void)_centerContentIfNecessaryAdjustingContentOffset:(BOOL)a0;
- (void)centerContentIgnoringInsets;

@end
