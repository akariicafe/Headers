@class SFWebProcessPlugInCertificateWarningController;

@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods> {
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
}

- (void)visitInsecureWebsite;
- (void)goBackSelected;
- (void)showCertificateInformation;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)openClockSettings;
- (void).cxx_destruct;
- (id)initWithCertificateWarningController:(id)a0;
- (void)pageLoaded;

@end
