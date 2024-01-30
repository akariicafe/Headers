@interface UIInputSwitcherGestureState : NSObject

@property (nonatomic) BOOL didMoveBeyondThreshold;
@property (nonatomic) BOOL hideSwitcher;
@property (nonatomic) struct CGPoint { double x; double y; } firstReferencePoint;
@property (nonatomic) double touchDown;
@property (nonatomic) double lastSeenKeyboardTouchDown;

- (BOOL)gestureConflictsWithTypingWindow;

@end
