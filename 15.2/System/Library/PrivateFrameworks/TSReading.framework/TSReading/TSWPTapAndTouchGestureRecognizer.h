@class NSString, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@interface TSWPTapAndTouchGestureRecognizer : UIGestureRecognizer <TSDTapGesture>

@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (retain, nonatomic) id<TSDGestureTarget> cachedGestureTarget;
@property (nonatomic) id<TSDGestureDelegate> gestureDelegate;
@property (retain, nonatomic) NSString *gestureKind;
@property (retain, nonatomic) TSDRep *targetRep;
@property (readonly, nonatomic) int gestureState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)p_failBecauseFingerStayedUpTooLongAfterTap;

@end
