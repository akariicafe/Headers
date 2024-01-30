@class UITextView, PDFPageView, PDFView, NSUndoManager, NSString, PDFAnnotation, UIViewController;

@interface PDFKitPopupViewPrivate : NSObject {
    PDFAnnotation *parentAnnotation;
    PDFPageView *pageView;
    PDFView *view;
    UITextView *popupTextView;
    NSUndoManager *popupTextViewUndoManager;
    UIViewController *popupController;
    NSString *contents;
    BOOL deviceIsiPhone;
    BOOL deviceIsiPad;
    id savedFirstResponder;
}

- (void).cxx_destruct;

@end
