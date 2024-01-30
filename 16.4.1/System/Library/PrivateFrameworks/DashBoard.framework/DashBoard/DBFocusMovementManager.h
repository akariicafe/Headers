@class CARInputDeviceTouchpad, DBEnvironmentConfiguration;

@interface DBFocusMovementManager : NSObject {
    CARInputDeviceTouchpad *_currentTouchpad;
    unsigned long long _currentSenderID;
}

@property (weak, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1 toScreen:(id)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1 fromScreen:(id)a2;
+ (BOOL)isMovementAllowedForHeading:(unsigned long long)a0 direction:(unsigned long long)a1 isRTL:(BOOL)a2 isLeftHandDrive:(BOOL)a3 statusBarEdge:(unsigned long long)a4;
+ (BOOL)isOEMToiOSHeadingToStatusBar:(unsigned long long)a0 isLeftHandDrive:(BOOL)a1 statusBarEdge:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithEnvironmentConfiguration:(id)a0;
- (void)performHapticFeedbackForSenderID:(unsigned long long)a0;

@end
