@class NSArray, UIView;
@protocol AXUIFloatingViewPresenterDelegate;

@interface AXUIFloatingViewPresenter : NSObject

@property (retain, nonatomic) UIView *floatingView;
@property (retain, nonatomic) NSArray *edgeConstraints;
@property (weak, nonatomic) id<AXUIFloatingViewPresenterDelegate> delegate;
@property (readonly, nonatomic) UIView *containingView;
@property (nonatomic) unsigned long long alignedEdge;
@property (readonly, nonatomic) BOOL withinSafeArea;

- (void).cxx_destruct;
- (void)_hideFloatingView;
- (void)_updateEdgeConstraints;
- (void)dismissFloatingView;
- (id)initWithContainingView:(id)a0 alignedToEdge:(unsigned long long)a1 withinSafeArea:(BOOL)a2;
- (void)presentFloatingView:(id)a0 withDuration:(double)a1;

@end
