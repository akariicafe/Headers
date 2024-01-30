@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController

@property (nonatomic) BOOL delayForceMagnify;
@property (nonatomic) BOOL didLongForcePress;

+ (id)sharedInstance;

- (BOOL)oneFingerForcePressShouldCancelTouchesInView;
- (Class)textInteractionClass;
- (BOOL)allowOneFingerDeepPress;
- (void)_cleanupDeadGesturesIfNecessary;
- (double)oneFingerForcePressMinimumDuration;
- (BOOL)oneFingerForcePressShouldFailWithoutForce;

@end
