@class SFWebProcessPlugInCertificateWarningController;

@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods> {
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
}

- (void).cxx_destruct;
- (void)pageLoaded;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)showCertificateInformation;
- (void)goBackSelected;
- (void)visitInsecureWebsite;
- (void)openClockSettings;
- (id)initWithCertificateWarningController:(id)a0;

@end
