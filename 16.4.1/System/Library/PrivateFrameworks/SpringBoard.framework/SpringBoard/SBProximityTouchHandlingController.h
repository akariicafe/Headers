@class UIWindowScene, NSSet, NSString, UIWindow, _SBProximityTouchHandlingViewController;
@protocol BSInvalidatable;

@interface SBProximityTouchHandlingController : NSObject <BSInvalidatable> {
    UIWindowScene *_windowScene;
    UIWindow *_proxTouchHandlingWindow;
    _SBProximityTouchHandlingViewController *_proxTouchHandlingViewController;
    id<BSInvalidatable> _suppressBackBoardTouchCancellation;
    id<BSInvalidatable> _suppressSystemGestures;
}

@property (nonatomic) BOOL absorbTouchesBelowStatusBar;
@property (retain, nonatomic) NSSet *allowedSystemGestureTypes;
@property (nonatomic) double statusBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
