@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController

@property (nonatomic) BOOL delayForceMagnify;
@property (nonatomic) BOOL didLongForcePress;

+ (id)sharedInstance;

- (BOOL)oneFingerForcePressShouldCancelTouchesInView;
- (void)_cleanupDeadGesturesIfNecessary;
- (double)oneFingerForcePressMinimumDuration;
- (BOOL)oneFingerForcePressShouldFailWithoutForce;
- (BOOL)allowOneFingerDeepPress;
- (Class)textInteractionClass;

@end
