@class AKRectAnnotation;

@interface PDFAKOverlayAdaptorPrivate_ios : NSObject {
    AKRectAnnotation *editingAnnotaiton;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleTextViewRectInScrollView; double animationDuration; double originDelta; } animationProperties;
}

- (void).cxx_destruct;

@end
