@interface ProximityAppleIDSetupUI.PASUIProxiedTermsHandler : SwiftNativeNSObject <AAUIGenericTermsRemoteUIDelegate> {
    void /* unknown type, empty encoding */ viewControllerProvider;
    void /* unknown type, empty encoding */ authResults;
    void /* unknown type, empty encoding */ proxiedDevice;
    void /* unknown type, empty encoding */ acceptAction;
    void /* unknown type, empty encoding */ declineAction;
    void /* unknown type, empty encoding */ proxiedTermsRemoteUI;
    void /* unknown type, empty encoding */ acceptedTermsInfo;
    void /* unknown type, empty encoding */ didAccept;
}

- (void)genericTermsRemoteUI:(id)a0 acceptedTermsInfo:(id)a1;
- (void)genericTermsRemoteUI:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (id)init;

@end
