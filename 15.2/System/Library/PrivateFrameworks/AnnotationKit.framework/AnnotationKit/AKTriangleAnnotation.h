@class UIBezierPath, NSString;

@interface AKTriangleAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol>

@property (retain) UIBezierPath *path;
@property BOOL verticallyFlipped;
@property BOOL horizontallyFlipped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;

- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForRedrawing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;

@end
