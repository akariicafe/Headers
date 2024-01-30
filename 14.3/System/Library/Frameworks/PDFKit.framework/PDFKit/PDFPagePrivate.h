@class NSLock, NSString, UIImage, NSAttributedString, PDFAKPageAdaptor, NSMutableDictionary, PDFDocument, NSMutableArray, PDFView, NSMutableSet;

@interface PDFPagePrivate : NSObject {
    PDFDocument *document;
    struct CGPDFPage { } *page;
    struct CGColor { } *pageBackgroundColorHint;
    PDFView *view;
    NSString *label;
    UIImage *image;
    struct CGImage { } *cgImage;
    struct CGImageSource { } *cgImageSource;
    unsigned int cgImageOrientation;
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
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } displayListCreationLock;
    BOOL bookmarked;
    BOOL isFullyConstructed;
    BOOL colorWidgetBackgrounds;
    PDFAKPageAdaptor *akPageAdaptor;
    BOOL akDidSetupRealPageModelController;
    NSMutableArray *annotationChanges;
    NSMutableSet *changedAnnotations;
    NSMutableDictionary *widgetAnnotationLookup;
    NSMutableArray *scannerResults;
    BOOL didChangeBounds;
}

- (void).cxx_destruct;

@end
