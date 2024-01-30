@protocol SBSystemGestureRecognizerDelegate;

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer

@property (nonatomic) double grabberActiveZoneWidth;
@property (weak, nonatomic) id<SBSystemGestureRecognizerDelegate> delegate;

- (id)initWithTarget:(id)a0 action:(SEL)a1 type:(long long)a2 options:(unsigned long long)a3;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)isLocationWithinGrabberActiveZone;
- (long long)_touchInterfaceOrientation;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;

@end
