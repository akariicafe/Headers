@class NSTimer, NSString, NSURL, UINavigationController, _WKRemoteObjectInterface, WBSCertificateWarningPageContext, NSURLRequest, NSObject, WKWebView;
@protocol WBSCertificateWarningPagePresenter, _SFDialogPresenting, OS_dispatch_queue, _SFPageLoadErrorControllerDelegate;

@interface _SFPageLoadErrorController : NSObject <WBSCertificateWarningPageHandler> {
    BOOL _reloadAfterResume;
    WKWebView *_webView;
    NSTimer *_crashCountResetTimer;
    NSObject<OS_dispatch_queue> *_certManagerQueue;
    id<WBSCertificateWarningPagePresenter> _certificateWarningPagePresenterProxy;
    _WKRemoteObjectInterface *_certificateWarningPageHandlerInterface;
    BOOL _certificateWarningPageHandlerInterfaceInvalidated;
    struct __SecTrust { } *_certificateTrust;
    id /* block */ _certificateRecoveryAttempter;
    NSURL *_certificateFailingURL;
    UINavigationController *_certificateNavigationViewController;
    WBSCertificateWarningPageContext *_legacyTLSWarningPageContext;
    NSURL *_clickThroughURL;
}

@property (weak, nonatomic) id<_SFPageLoadErrorControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL reloadingFailedRequest;
@property (readonly, nonatomic) NSURLRequest *failedRequest;
@property (readonly, nonatomic) unsigned long long crashesSinceLastSuccessfulLoad;
@property (weak, nonatomic) id<_SFDialogPresenting> dialogPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reachabilityChanged:(id)a0;
- (void)scheduleResetCrashCount;
- (void)showErrorPageWithTitle:(id)a0 bodyText:(id)a1 learnMoreLink:(id)a2 forError:(id)a3;
- (void)handleClientCertificateAuthenticationChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleLegacyTLSWithFailingURL:(id)a0 clickThroughURL:(id)a1 authenticationChallenge:(id)a2;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)reloadAfterError;
- (void)addInvalidProfileAlert;
- (void)_handleFrameLoadError:(id)a0 forURL:(id)a1 recoveryAttempter:(id /* block */)a2;
- (void)addAlert:(id)a0;
- (void)addDisallowedFileURLAlert;
- (id)initWithWebView:(id)a0;
- (void)_loadCertificateWarningPageForContext:(id)a0;
- (id)_certificateWarningPagePresenterProxy;
- (BOOL)updateCrashesAndShowCrashError:(id)a0 URLString:(id)a1;
- (void)clearCrashCountResetTimer;
- (void)_handleCertificateError:(id)a0 forURL:(id)a1 isMainFrame:(BOOL)a2 recoveryAttempter:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)goBackButtonClicked;
- (void)_resetCrashCountSoon;
- (void)_continueAfterCertificateAlertWithURL:(id)a0 trust:(struct __SecTrust { } *)a1 recoveryAttempter:(id /* block */)a2;
- (void)addDownloadFailedAlertWithDescription:(id)a0;
- (void)visitInsecureWebsite;
- (void)handleSubframeCertificateError:(id)a0;
- (id)_genericMessageForError:(id)a0;
- (void)addInvalidURLAlert;
- (void)showErrorPageWithTitle:(id)a0 bodyText:(id)a1 forError:(id)a2;
- (void)handleFrameLoadError:(id)a0;
- (void)addDialog:(id)a0;
- (void).cxx_destruct;
- (void)webViewDidCommitErrorPagePreview:(id)a0;
- (void)addDisallowedUseOfJavaScriptAlert;
- (void)addFormAlertWithTitle:(id)a0 decisionHandler:(id /* block */)a1;
- (void)addAlertWithTitle:(id)a0 bodyText:(id)a1;
- (void)_showRepeatedWebProcessCrashError:(id)a0 URLString:(id)a1;
- (id)_titleForError:(id)a0;
- (void)clearFailedRequest;
- (void)_resetCrashCount:(id)a0;
- (void)_setUpCertificateWarningPageHandlerInterface;
- (void)invalidate;
- (void)showCertificateInformation;
- (void)_continueWithoutCredentialsUsingAlertContext:(id)a0;
- (void)_setFailedRequest:(id)a0;
- (void)dealloc;
- (void)openClockSettings;
- (id)_specializedMessageForError:(id)a0 URL:(id)a1;
- (void)performAction:(int)a0 forAlert:(id)a1;
- (void)_clearCertificateWarningPageHandlerInterface;
- (void)_dismissCertificateViewButtonTapped;

@end
