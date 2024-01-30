@class NSUUID, NSString, SBAppLayout;
@protocol SBGestureRecognizerTouchHistoryProviding;

@interface SBGestureSwitcherModifierEvent : SBSwitcherModifierEvent <SBGestureRecognizerTouchHistoryProviding>

@property (nonatomic) unsigned long long phase;
@property (nonatomic) long long touchType;
@property (nonatomic, getter=isMouseEvent) BOOL mouseEvent;
@property (nonatomic, getter=isPointerTouch) BOOL pointerTouch;
@property (nonatomic, getter=isCanceled) BOOL canceled;
@property (nonatomic) double lastTouchTimestamp;
@property (nonatomic) struct CGPoint { double x; double y; } locationInContainerView;
@property (nonatomic) struct CGPoint { double x; double y; } translationInContainerView;
@property (nonatomic) struct CGPoint { double x; double y; } velocityInContainerView;
@property (nonatomic) double hysteresis;
@property (retain, nonatomic) id<SBGestureRecognizerTouchHistoryProviding> touchHistoryProvider;
@property (readonly, nonatomic) NSUUID *gestureID;
@property (readonly, nonatomic) SBAppLayout *selectedAppLayout;
@property (readonly, nonatomic) long long gestureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (double)peakSpeed;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (id)initWithGestureID:(id)a0 selectedAppLayout:(id)a1 gestureType:(long long)a2 phase:(unsigned long long)a3;
- (BOOL)isGestureEvent;

@end
