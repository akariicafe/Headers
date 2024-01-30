@interface AKSpeechBubbleAnnotation : AKThoughtBubbleAnnotation

@property double pointyBitBaseWidthAngle;

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;

- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForAdornments;

@end
