@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController

@property (nonatomic) BOOL delayForceMagnify;
@property (nonatomic) BOOL didLongForcePress;

+ (id)sharedInstance;

- (void)_cleanupDeadGesturesIfNecessary;
- (Class)textInteractionClass;
- (BOOL)oneFingerForcePressShouldFailWithoutForce;
- (double)oneFingerForcePressMinimumDuration;
- (BOOL)allowOneFingerDeepPress;
- (BOOL)oneFingerForcePressShouldCancelTouchesInView;

@end
