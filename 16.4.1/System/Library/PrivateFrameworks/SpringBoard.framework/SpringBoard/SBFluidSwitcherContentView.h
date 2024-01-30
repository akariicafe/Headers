@class NSString;
@protocol SBFluidSwitcherContentViewDelegate, UICoordinateSpace;

@interface SBFluidSwitcherContentView : UIView <UIFocusItemScrollableContainer, SBSwitcherLayoutElementProviding>

@property (nonatomic) BOOL passesTouchesThrough;
@property (weak, nonatomic) id<SBFluidSwitcherContentViewDelegate> delegate;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } visibleSize;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (unsigned long long)switcherLayoutElementType;
- (void).cxx_destruct;

@end
