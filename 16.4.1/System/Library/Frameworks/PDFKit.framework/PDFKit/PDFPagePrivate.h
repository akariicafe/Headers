@class NSMutableDictionary, PDFAKPageAdaptor, NSDictionary, PDFDetectedFormField, NSMutableArray, PDFAnnotation, PDFDocument, NSString, PDFDetectedForm, NSAttributedString, NSMutableSet, PDFView, NSLock;

@interface PDFPagePrivate : NSObject {
    PDFDocument *document;
    struct CGPDFPage { } *page;
    struct CGColor { } *pageBackgroundColorHint;
    PDFView *view;
    NSString *label;
    struct CGImage { } *pageImage;
    NSDictionary *pageImageOptions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } layoutLock;
    struct CGPDFLayout { } *layout;
    _Atomic BOOL builtLayout;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataDetectorsLock;
    BOOL ranDataDetectors;
    NSString *text;
    NSAttributedString *attributedString;
    BOOL displaysAnnotations;
    BOOL displaysMarkups;
    NSMutableArray *annotations;
    _Atomic BOOL loadedAnnotations;
    NSLock *lock_getAnnotations;
    NSLock *lock_accessAnnotations;
    NSMutableArray *scannedAnnotations;
    long long rotation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaBox;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropBox;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bleedBox;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trimBox;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } artBox;
    struct CGDisplayList { } *displayList;
    BOOL creatingDisplayList;
    NSMutableArray *createDisplayListCompletionBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } displayListMutex;
    BOOL bookmarked;
    BOOL isFullyConstructed;
    BOOL colorWidgetBackgrounds;
    PDFAKPageAdaptor *akPageAdaptor;
    BOOL akDidSetupRealPageModelController;
    NSMutableArray *annotationChanges;
    NSMutableSet *changedAnnotations;
    NSMutableDictionary *widgetAnnotationLookup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } widgetAnnotationLookupLock;
    NSMutableArray *scannerResults;
    BOOL didChangeBounds;
    char candidateForOCR;
    BOOL requestedOCR;
    BOOL textFromOCR;
    PDFDetectedForm *detectedForm;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } searchForTextFieldsLock;
    PDFAnnotation *firstTextField;
    PDFDetectedFormField *firstDetectedFormField;
    BOOL didSearchForTextFields;
}

- (void).cxx_destruct;

@end
