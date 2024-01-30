@class NSString, BNPanGestureProxyAction;
@protocol BNPanGestureProxyDelegate;

@interface _BNPanGestureServiceProxy : NSObject <BNPanGestureProxyPrivate>

@property (retain, nonatomic, getter=_activePanGestureProxyAction, setter=_setActivePanGestureProxyAction:) BNPanGestureProxyAction *activePanGestureProxyAction;
@property (weak, nonatomic) id<BNPanGestureProxyDelegate> delegate;
@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly, nonatomic) BOOL didCrossDefaultThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (void)sendAction;
- (struct CGPoint { double x0; double x1; })translationInCoordinateSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityInCoordinateSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })visualTranslationInCoordinateSpace:(id)a0;

@end
