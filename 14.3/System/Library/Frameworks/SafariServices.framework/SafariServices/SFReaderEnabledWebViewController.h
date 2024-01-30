@class _SFReaderController, NSString, _WKRemoteObjectInterface;
@protocol SFReaderEnabledWebViewControllerDelegate;

@interface SFReaderEnabledWebViewController : SFWebViewController <_SFAppBannerMetaTagContentObserver, _SFReaderControllerDelegate, WKNavigationDelegatePrivate> {
    _WKRemoteObjectInterface *_appBannerMetaTagContentObserverInterface;
}

@property (readonly, nonatomic) _SFReaderController *readerController;
@property (weak, nonatomic) id<SFReaderEnabledWebViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateDarkModeEnabled;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void).cxx_destruct;
- (void)createReaderWebViewForReaderController:(id)a0;
- (void)readerController:(id)a0 didDetermineReaderAvailability:(id)a1 dueTo:(long long)a2;
- (void)readerController:(id)a0 contentDidBecomeReadyWithDetectedLanguage:(id)a1;
- (void)readerController:(id)a0 didClickLinkRequestingNewWindowInReaderWithRequest:(id)a1;
- (void)readerController:(id)a0 didClickLinkInReaderWithRequest:(id)a1;
- (void)dealloc;
- (void)loadView;
- (void)setUpReaderWithReaderWebView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didFindAppBannerWithContent:(id)a0;
- (void)invalidate;

@end
