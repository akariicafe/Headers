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
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)certificateWarningPageLoaded;
- (id)initWithPageController:(id)a0;
- (void)_setUpCertificateWarningPagePresenterInterface;
- (void)visitInsecureWebsite;
- (id)_certificateWarningPageHandlerProxy;
- (void)goBackSelected;
- (void).cxx_destruct;
- (void)_clearCertificateWarningPagePresenterInterface;
- (void)showCertificateInformation;
- (void)dealloc;
- (void)openClockSettings;
- (void)injectCertificateWarningBindingsForFrame:(id)a0 inScriptWorld:(id)a1;

@end
