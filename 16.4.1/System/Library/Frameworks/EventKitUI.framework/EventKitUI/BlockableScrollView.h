@class NSObject;
@protocol BlockableScrollViewDelegate;

@interface BlockableScrollView : UIScrollView

@property (weak, nonatomic) NSObject<BlockableScrollViewDelegate> *blockableDelegate;
@property (nonatomic) BOOL isResizing;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
