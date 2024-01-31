@class PDFAnnotation, NSMutableArray;

@interface PDFAnnotationAccessibilityElement : AXPDFNodeElement

@property (weak, nonatomic) PDFAnnotation *annotation;
@property (retain, nonatomic) NSMutableArray *cachedAXElements;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_accessibilityAnnotationFieldType;
- (id)_accessibilityAnnotationType;
- (id)_accessibilityAnnotationWidgetTextLabel;
- (BOOL)_accessibilityIsButtonWidget;
- (id)_accessibilityLineStyleStringForLineStyle:(long long)a0;
- (void)_axAnnotationHit:(id)a0;
- (void)_axRemovedFromSuperview:(id)a0;
- (id)initWithPage:(id)a0 annotation:(id)a1 withParent:(id)a2;

@end
