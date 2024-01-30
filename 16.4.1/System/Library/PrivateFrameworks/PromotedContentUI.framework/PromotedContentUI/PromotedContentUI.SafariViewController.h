@interface PromotedContentUI.SafariViewController : SFSafariViewController {
    void /* unknown type, empty encoding */ notificationObserver;
    void /* unknown type, empty encoding */ notificationCloseObserver;
    void /* unknown type, empty encoding */ actionDelegate;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithURL:(id)a0 configuration:(id)a1;
- (id)initWithURL:(id)a0 entersReaderIfAvailable:(BOOL)a1;

@end
