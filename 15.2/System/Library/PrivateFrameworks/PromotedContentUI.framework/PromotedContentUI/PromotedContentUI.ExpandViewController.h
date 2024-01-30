@interface PromotedContentUI.ExpandViewController : UIViewController <APWebProcessDelegate> {
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ maximumExpandedSize;
    void /* unknown type, empty encoding */ expandedDestinationURL;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ navigationCoordinator;
    void /* unknown type, empty encoding */ webProcessDelegate;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButtonPadding;
}

- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallExpand:(id)a0 withMaximumWidth:(double)a1 andHeight:(double)a2;
- (void)webProcessMRAIDJSODidCallOpen:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tapRecognized:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)closeButtonTappedWithSender:(id)a0;

@end
