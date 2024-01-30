@class NSString, UIWindow;

@interface BNPanGestureProxyAction : BSAction <BNPanGestureProxy>

@property (weak, nonatomic) UIWindow *serviceSideWindow;
@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly, nonatomic) BOOL didCrossDefaultThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_infoFromPanGestureProxy:(id)a0 window:(id)a1;

- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_convertPointInSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (id)initWithPanGestureProxy:(id)a0 hostSideWindow:(id)a1;
- (struct CGPoint { double x0; double x1; })translationInCoordinateSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityInCoordinateSpace:(id)a0;
- (struct CGPoint { double x0; double x1; })visualTranslationInCoordinateSpace:(id)a0;

@end
