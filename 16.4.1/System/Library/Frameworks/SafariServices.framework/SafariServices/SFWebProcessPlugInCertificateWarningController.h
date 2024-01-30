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
- (void)visitInsecureWebsite;
- (void)_setUpCertificateWarningPagePresenterInterface;
- (void)goBackSelected;
- (void)showCertificateInformation;
- (id)initWithPageController:(id)a0;
- (void)injectCertificateWarningBindingsForFrame:(id)a0 inScriptWorld:(id)a1;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)openClockSettings;
- (void)dealloc;
- (void)_clearCertificateWarningPagePresenterInterface;
- (void)certificateWarningPageLoaded;
- (id)_certificateWarningPageHandlerProxy;
- (void).cxx_destruct;

@end
