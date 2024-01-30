@class UIView;
@protocol HUQuickControlInteractionCoordinatorDelegate, HUQuickControlControllableView;

@interface HUQuickControlInteractionCoordinator : NSObject

@property (nonatomic) BOOL viewVisible;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) UIView<HUQuickControlControllableView> *controlView;
@property (weak, nonatomic) id<HUQuickControlInteractionCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)initWithControlView:(id)a0 delegate:(id)a1;
- (void)recordInteractionStart;

@end
