@interface NewsArticles.PDFReplicaViewController : UIViewController <UIGestureRecognizerDelegate, PDFViewDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ contentBackgroundColor;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ pdfView;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ loadingIndicatorProvider;
    void /* unknown type, empty encoding */ pinchRecognizer;
    void /* unknown type, empty encoding */ loadingStateMachine;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)handlePinchGesture;
- (void)PDFViewWillClickOnLink:(id)a0 withURL:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
