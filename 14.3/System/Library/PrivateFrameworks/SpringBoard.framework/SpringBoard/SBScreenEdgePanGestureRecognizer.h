@protocol SBSystemGestureRecognizerDelegate;

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer

@property (nonatomic) double grabberActiveZoneWidth;
@property (weak, nonatomic) id<SBSystemGestureRecognizerDelegate> delegate;

- (BOOL)isLocationWithinGrabberActiveZone;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1 type:(long long)a2 options:(unsigned long long)a3;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;
- (long long)_touchInterfaceOrientation;

@end
