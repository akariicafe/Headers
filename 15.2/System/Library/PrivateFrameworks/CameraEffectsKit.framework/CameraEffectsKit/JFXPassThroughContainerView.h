@protocol JFXPassThroughContainerViewDelegate;

@interface JFXPassThroughContainerView : UIView

@property (weak, nonatomic) id<JFXPassThroughContainerViewDelegate> delegate;
@property (nonatomic) BOOL shouldDelegatePointInside;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
