@class SFWebProcessPlugInCertificateWarningController;

@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods> {
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
}

- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)visitInsecureWebsite;
- (void)goBackSelected;
- (void).cxx_destruct;
- (void)showCertificateInformation;
- (void)openClockSettings;
- (id)initWithCertificateWarningController:(id)a0;
- (void)pageLoaded;

@end
