@protocol CCUIScrollViewDelegate;

@interface CCUIScrollView : UIScrollView

@property (weak, nonatomic) id<CCUIScrollViewDelegate> delegate;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
