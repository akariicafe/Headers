@class UIPDFAnnotation;

@interface UIPDFPopupAnnotation : UIPDFAnnotation

@property (nonatomic) UIPDFAnnotation *parent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } adjustedBounds;

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (Class)viewClass;
- (int)annotationType;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0;
- (BOOL)recognizeGestures;

@end
