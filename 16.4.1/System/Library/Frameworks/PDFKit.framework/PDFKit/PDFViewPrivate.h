@class PDFScrollView, PDFPasswordViewController, PDFPage, NSObject, UITapGestureRecognizer, PDFAnnotation, NSMutableArray, PDFRenderingProperties, PDFDocumentViewController, PDFDocument, UILongPressGestureRecognizer, PDFCoachMarkManager, NSDictionary, UIDragInteraction, PDFSelection, PDFViewLayout, NSArray, PDFViewController, UIFindInteraction, PDFTimer;
@protocol PDFViewDelegate, OS_dispatch_queue;

@interface PDFViewPrivate : NSObject {
    PDFDocument *document;
    PDFScrollView *scrollView;
    PDFViewController *controller;
    PDFSelection *currentSelection;
    BOOL autoScale;
    BOOL scaling;
    double zoomIncrement;
    id<PDFViewDelegate> delegate;
    BOOL delegateWillScale;
    BOOL delegateOrdersPageDrawing;
    BOOL delegateRespondsToAllowFormFilling;
    double gutterWide;
    BOOL displaysPageBreaks;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } pageBreakMargins;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } documentMargins;
    long long displayMode;
    long long displayDirection;
    PDFViewLayout *viewLayout;
    BOOL displaysAsBook;
    BOOL displaysRTL;
    PDFRenderingProperties *renderingProperties;
    unsigned long long lastVerticalScrollDirection;
    unsigned long long lastHorizontalScrollDirection;
    BOOL displaysBookmarksForPages;
    unsigned long long firstVisiblePage;
    unsigned long long lastVisiblePage;
    BOOL inhibitAutoScroll;
    PDFPage *fromPage;
    PDFPage *toPage;
    PDFTimer *pageSyncTimer;
    NSObject<OS_dispatch_queue> *pagePreloadQueue;
    NSMutableArray *destinationHistory;
    long long historyIndex;
    NSArray *highlights;
    PDFCoachMarkManager *coachMarkManager;
    PDFPasswordViewController *passwordViewController;
    PDFAnnotation *annotationOver;
    BOOL showsScrollIndicators;
    BOOL dataDetectorsEnabled;
    BOOL debugDrawCGPDFNodeLayer[11];
    BOOL wantsForceUpdate;
    double blockingWaitDuration;
    unsigned long long activeMarkupStyle;
    BOOL inFormFillingMode;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    BOOL isUsingPageViewController;
    PDFDocumentViewController *documentViewController;
    NSDictionary *pageViewControllerOptions;
    UIDragInteraction *dragInteraction;
    UIFindInteraction *findInteraction;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } savedSafeAreaInsets;
    double horizontalScaleFactorBeforeRotation;
    struct CGPoint { double x; double y; } documentViewCenterBeforeRotation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extensionViewBoundsInDocument;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extensionViewFrame;
    double extensionViewZoomScale;
    PDFTimer *tilesSyncTimer;
}

- (void).cxx_destruct;

@end
