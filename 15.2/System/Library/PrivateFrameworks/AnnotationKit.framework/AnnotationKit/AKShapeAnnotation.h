@class UIColor, NSString;

@interface AKShapeAnnotation : AKStrokedAnnotation <AKFilledAnnotationProtocol>

@property (retain) UIColor *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;

- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;

@end
