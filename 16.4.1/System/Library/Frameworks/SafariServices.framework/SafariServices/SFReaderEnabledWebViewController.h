@class _SFReaderController, NSString, _WKRemoteObjectInterface;
@protocol SFReaderEnabledWebViewControllerDelegate;

@interface SFReaderEnabledWebViewController : SFWebViewController <SFAppBannerMetaTagContentObserver, _SFReaderControllerDelegate, WKNavigationDelegatePrivate> {
    _WKRemoteObjectInterface *_appBannerMetaTagContentObserverInterface;
}

@property (readonly, nonatomic) _SFReaderController *readerController;
@property (weak, nonatomic) id<SFReaderEnabledWebViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)readerController:(id)a0 didDetermineReaderAvailability:(id)a1 dueTo:(long long)a2;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)readerController:(id)a0 didClickLinkInReaderWithRequest:(id)a1;
- (void)dealloc;
- (void)readerController:(id)a0 didDetermineAdditionalTextSamples:(id)a1 dueTo:(long long)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)didFindAppBannerWithContent:(id)a0;
- (void)invalidate;
- (void)readerController:(id)a0 didClickLinkRequestingNewWindowInReaderWithRequest:(id)a1;
- (void)createReaderWebViewForReaderController:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)_updateDarkModeEnabled;
- (void)readerController:(id)a0 contentDidBecomeReadyWithDetectedLanguage:(id)a1;
- (void)setUpReaderWithReaderWebView:(id)a0;

@end
