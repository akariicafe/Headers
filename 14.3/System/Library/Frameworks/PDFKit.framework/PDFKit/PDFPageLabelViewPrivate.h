@class _UIBackdropView, UILabel, PDFTimer;

@interface PDFPageLabelViewPrivate : NSObject {
    _UIBackdropView *backdropView;
    UILabel *label;
    PDFTimer *visibilityTimer;
}

- (void).cxx_destruct;

@end
