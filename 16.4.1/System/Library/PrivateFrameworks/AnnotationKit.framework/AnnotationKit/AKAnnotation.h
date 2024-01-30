@class NSString, NSDate;

@interface AKAnnotation : NSObject <NSSecureCoding, NSCopying> {
    id /* block */ _appearanceOverride;
    BOOL _shouldUseAppearanceOverride;
    BOOL _isObservingForAppearance;
    struct CGPDFDocument { } *_appearanceOverridePDF;
    BOOL _isObservingForIsEdited;
    BOOL _isReallyObservingForIsEdited;
    BOOL _conformsToAKStrokedAnnotationProtocol;
    BOOL _conformsToAKFilledAnnotationProtocol;
    BOOL _conformsToAKRectangularAnnotationProtocol;
    BOOL _conformsToAKFlippableAnnotationProtocol;
    BOOL _conformsToAKRotatableAnnotationProtocol;
    BOOL _conformsToAKTextAnnotationProtocol;
    BOOL _conformsToAKParentAnnotationProtocol;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL isEdited;
@property long long akSerializationVersion;
@property long long akSerializationPlatform;
@property BOOL isEditingText;
@property BOOL textIsFixedWidth;
@property BOOL textIsFixedHeight;
@property BOOL textIsClipped;
@property BOOL shouldUsePlaceholderText;
@property BOOL editingDisabled;
@property (weak) AKAnnotation *parentAnnotation;
@property (weak) AKAnnotation *childAnnotation;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialDrawingBoundsForAppearanceOverride;
@property BOOL shouldUseAppearanceOverride;
@property BOOL shouldObserveEdits;
@property BOOL isBeingCopied;
@property (readonly) NSString *UUID;
@property (readonly) NSString *displayName;
@property (copy) NSString *customPlaceholderText;
@property (nonatomic) double originalModelBaseScaleFactor;
@property (nonatomic) long long originalExifOrientation;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } hitTestBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawingBounds;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } integralDrawingBounds;
@property (copy) id /* block */ appearanceOverride;
@property (readonly) BOOL isUsingAppearanceOverride;
@property BOOL editsDisableAppearanceOverride;
@property (readonly) BOOL shouldBurnIn;
@property (retain) NSDate *modificationDate;
@property (copy) NSString *author;
@property BOOL isTranslating;
@property BOOL isDraggingHandle;
@property BOOL isFormField;

+ (id)annotationWithData:(id)a0;
+ (id)defaultPlaceholderText;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)a0;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)translateBy:(struct CGPoint { double x0; double x1; })a0;
- (id)keysForValuesToObserveForUndo;
- (BOOL)conformsToAKFilledAnnotationProtocol;
- (BOOL)conformsToAKStrokedAnnotationProtocol;
- (BOOL)conformsToAKTextAnnotationProtocol;
- (void)adjustModelToCompensateForOriginalExif;
- (BOOL)conformsToAKFlippableAnnotationProtocol;
- (BOOL)conformsToAKParentAnnotationProtocol;
- (BOOL)conformsToAKRectangularAnnotationProtocol;
- (BOOL)conformsToAKRotatableAnnotationProtocol;
- (void)flattenModelExifOrientation:(long long)a0 withModelSize:(struct CGSize { double x0; double x1; })a1;
- (id)keysForValuesToObserveForAdornments;
- (id)keysForValuesToObserveForRedrawing;

@end
