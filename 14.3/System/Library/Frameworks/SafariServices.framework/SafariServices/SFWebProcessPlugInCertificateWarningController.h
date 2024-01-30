@class _SFWebProcessPlugInPageController, NSString, _WKRemoteObjectInterface, WBSCertificateWarningPageContext;
@protocol WBSCertificateWarningPageHandler;

@interface SFWebProcessPlugInCertificateWarningController : NSObject <WBSCertificateWarningPagePresenter> {
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_certificateWarningPagePresenterInterface;
    WBSCertificateWarningPageContext *_warningPageContext;
    id<WBSCertificateWarningPageHandler> _certificateWarningPageHandlerProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareCertificateWarningPage:(id)a0;
- (void).cxx_destruct;
- (id)initWithPageController:(id)a0;
- (void)dealloc;
- (void)injectCertificateWarningBindingsForFrame:(id)a0 inScriptWorld:(id)a1;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)showCertificateInformation;
- (id)_certificateWarningPageHandlerProxy;
- (void)goBackSelected;
- (void)visitInsecureWebsite;
- (void)certificateWarningPageLoaded;
- (void)openClockSettings;
- (void)_setUpCertificateWarningPagePresenterInterface;
- (void)_clearCertificateWarningPagePresenterInterface;

@end
