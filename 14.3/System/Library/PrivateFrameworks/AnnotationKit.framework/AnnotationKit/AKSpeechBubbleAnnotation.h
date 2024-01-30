@interface AKSpeechBubbleAnnotation : AKThoughtBubbleAnnotation

@property double pointyBitBaseWidthAngle;

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForAdornments;

@end
