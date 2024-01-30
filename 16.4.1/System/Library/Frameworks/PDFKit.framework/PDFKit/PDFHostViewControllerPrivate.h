@class NSExtension, NSString, UITapGestureRecognizer, PDFPageLabelView, UILongPressGestureRecognizer, PDFExtensionTopView, PDFPasswordViewController, PDFPanGestureRecognizer, UIPointerInteraction, UIScrollView;
@protocol PDFHostViewControllerDelegate, PDFExtensionProtocol;

@interface PDFHostViewControllerPrivate : NSObject {
    NSExtension *extension;
    id<PDFExtensionProtocol> extensionProxy;
    UIScrollView *hostScrollView;
    id<PDFHostViewControllerDelegate> hostViewControllerDelegate;
    PDFExtensionTopView *topView;
    PDFPasswordViewController *passwordViewController;
    NSString *password;
    PDFPageLabelView *pageLabelView;
    BOOL isUnlocked;
    long long currentPageIndex;
    long long pageCount;
    struct CGSize { double width; double height; } documentViewSize;
    double minScaleFactor;
    double maxScaleFactor;
    BOOL hasSelection;
    struct CGPoint { double x; double y; } topLeftSelectionPoint;
    struct CGPoint { double x; double y; } bottomRightSelectionPoint;
    UITapGestureRecognizer *tapGestureRecognizer;
    UITapGestureRecognizer *doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    PDFPanGestureRecognizer *panGestureRecognizer;
    BOOL recentGestureIsIndirectTouch;
    UIPointerInteraction *pointerInteraction;
    id /* block */ pdfPointerCompletionHandler;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } insetBoundsInDocument;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollViewFrame;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } pdfSafeAreaInsets;
    double horizontalScaleFactor;
    struct CGPoint { double x; double y; } documentViewCenter;
    BOOL pdfViewIsRotating;
    BOOL pdfViewNeedsUpdate;
    BOOL hostScrollViewObserverIsActive;
    id /* block */ snapshotCompletion;
}

- (void).cxx_destruct;

@end
