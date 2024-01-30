@protocol WKActionSheetDelegate;

@interface WKActionSheet : UIAlertController {
    BOOL _isRotating;
    BOOL _readyToPresentAfterRotation;
    long long _currentPresentationStyle;
    struct RetainPtr<UIViewController> { void *m_ptr; } _currentPresentingViewController;
    struct RetainPtr<UIViewController> { void *m_ptr; } _presentedViewControllerWhileRotating;
    struct RetainPtr<id<UIPopoverPresentationControllerDelegate>> { void *m_ptr; } _popoverPresentationControllerDelegateWhileRotating;
}

@property (nonatomic) id<WKActionSheetDelegate> sheetDelegate;
@property (nonatomic) unsigned long long arrowDirections;

- (void)_cleanup;
- (BOOL)presentSheetFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didRotateAndLayout;
- (void)willRotate;
- (BOOL)presentSheet:(long long)a0;
- (void)updateSheetPosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentationRectForStyle:(long long)a0;
- (void)doneWithSheet:(BOOL)a0;
- (void)didRotate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end
