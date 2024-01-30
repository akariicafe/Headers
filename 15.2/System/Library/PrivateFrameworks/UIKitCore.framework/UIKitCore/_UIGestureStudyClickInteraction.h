@class NSString, UIView;
@protocol _UIClickInteractionDriving;

@interface _UIGestureStudyClickInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction, _UIGestureStudyParticipating>

@property (retain, nonatomic) id<_UIClickInteractionDriving> driver;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL usesForce;
@property (nonatomic) double startTimestamp;
@property (nonatomic) struct CGPoint { double x; double y; } originalCentroid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double movement;

- (void)clickDriver:(id)a0 didPerformEvent:(unsigned long long)a1;
- (void)clickDriver:(id)a0 shouldBegin:(id /* block */)a1;
- (void)didMoveToView:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1 useForce:(BOOL)a2;

@end
