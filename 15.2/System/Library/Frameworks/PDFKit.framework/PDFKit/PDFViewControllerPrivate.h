@class PDFMarkupMenuView, UIMenuItem, PDFView, CALayer, PDFAnnotation, NSMutableArray;

@interface PDFViewControllerPrivate : NSObject {
    PDFView *view;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewMarquee;
    CALayer *marqueeEffect;
    PDFAnnotation *activeAnnotation;
    unsigned long long textSelectionMenu;
    NSMutableArray *textSelectionMenuItems;
    UIMenuItem *highlightItem;
    UIMenuItem *showMarkupMenuItem;
    PDFMarkupMenuView *markupMenuView;
    double longPressGestureStartTime;
    BOOL didPostPDFExtensionViewAnnotationLongPress;
}

- (void).cxx_destruct;

@end
