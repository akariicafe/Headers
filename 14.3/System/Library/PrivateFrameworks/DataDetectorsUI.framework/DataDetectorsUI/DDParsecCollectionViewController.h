@class UITapGestureRecognizer, NSArray, NSString, _UIRemoteViewController, DDScannerResult, DDParsecRemoteCollectionViewController, NSDictionary;
@protocol DDParsecCollectionDelegate;

@interface DDParsecCollectionViewController : UINavigationController <DDParsecHostVCInterface, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, _UIRemoteViewControllerContaining> {
    DDParsecRemoteCollectionViewController *_remoteViewController;
    BOOL _previewMode;
    BOOL _sheetMode;
    BOOL _needsBackground;
    NSString *_queryString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _queryRange;
    DDScannerResult *_result;
    NSDictionary *_context;
    BOOL _showingError;
    BOOL _showingFTE;
    UITapGestureRecognizer *_tapGesture;
    long long _previousStatusBarStyle;
}

@property (copy) NSArray *actions;
@property (weak) id<DDParsecCollectionDelegate> parsecDelegate;
@property (copy) id /* block */ dismissCompletionHandler;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (void)presentationController:(id)a0 willPresentWithAdaptiveStyle:(long long)a1 transitionCoordinator:(id)a2;
- (void)showSpinner;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)viewWillDisappear:(BOOL)a0;
- (void)doneButtonPressed:(id)a0;
- (void)_updatePreferredContentSize;
- (BOOL)_allowsStylingSheetsAsCards;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)setPreviewMode:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)showError:(id)a0;
- (void)interactionEndedWithPunchout:(BOOL)a0;
- (void)setSheetMode:(BOOL)a0;
- (void)showingErrorView:(BOOL)a0;
- (void)showingFTE:(BOOL)a0;
- (void)openParsecURL:(id)a0;
- (void)getStatusBarHidden:(id /* block */)a0;
- (void)openTrailerPunchout:(id)a0;
- (void)fetchRemoteViewControllerWithValidInput:(BOOL)a0;
- (void)_interactionEnded;
- (void)updateVisualMode;
- (void)doneButtonPressed:(id)a0 punchout:(BOOL)a1;
- (void)presentRemoteCollection:(id)a0;
- (void)replaceControllerWithController:(id)a0;
- (id)initWithResult:(struct __DDResult { } *)a0 context:(id)a1;

@end
