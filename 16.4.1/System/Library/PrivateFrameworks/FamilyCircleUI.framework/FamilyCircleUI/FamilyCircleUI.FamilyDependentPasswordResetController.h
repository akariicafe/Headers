@interface FamilyCircleUI.FamilyDependentPasswordResetController : NSObject <RemoteUIControllerDelegate> {
    void /* unknown type, empty encoding */ parentAltDSID;
    void /* unknown type, empty encoding */ dependentAltDSID;
    void /* unknown type, empty encoding */ parentAccount;
    void /* unknown type, empty encoding */ ruiController;
    void /* unknown type, empty encoding */ guardianGSTokenErrorHeader;
    void /* unknown type, empty encoding */ guardianGSTokenErrorHeaderValue;
    void /* unknown type, empty encoding */ familyDependentPasswordResetApi;
    void /* unknown type, empty encoding */ hearbeatTokenKey;
    void /* unknown type, empty encoding */ tokens;
    void /* unknown type, empty encoding */ serverResourceLoader;
    void /* unknown type, empty encoding */ sessionConfiguration;
}

- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1 forRequest:(id)a2;
- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;

@end
