@interface ContactlessReaderUI.RegistrationViewModel : _TtCs12_SwiftObject <ProximityReader.RegUI> {
    void /* unknown type, empty encoding */ remoteProxy;
    void /* unknown type, empty encoding */ _accountID;
    void /* unknown type, empty encoding */ _dismissViewController;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _showError;
    void /* unknown type, empty encoding */ _showTermsofService;
    void /* unknown type, empty encoding */ regViewController;
    void /* unknown type, empty encoding */ partnerToken;
    void /* unknown type, empty encoding */ relink;
    void /* unknown type, empty encoding */ analyticsAppleIdUsed;
}

- (void)closeRegUI;
- (void)closeRegUIImmediate;
- (void)notifyRegUIResultWithResult:(id)a0;

@end
