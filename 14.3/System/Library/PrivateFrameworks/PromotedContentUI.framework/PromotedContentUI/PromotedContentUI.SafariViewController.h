@interface PromotedContentUI.SafariViewController : SFSafariViewController {
    void /* unknown type, empty encoding */ notificationObserver;
    void /* unknown type, empty encoding */ actionDelegate;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithURL:(id)a0 entersReaderIfAvailable:(BOOL)a1;
- (id)initWithURL:(id)a0 configuration:(id)a1;

@end
