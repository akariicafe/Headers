@interface _TtC31_AuthenticationServices_SwiftUIP33_A3D59D81812617403D8A44C04D5B775311Coordinator : NSObject <ASAuthorizationControllerPresentationContextProviding, ASAuthorizationControllerDelegate> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ presentationAnchor;
    void /* unknown type, empty encoding */ button;
}

- (id)init;
- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (void)buttonPressed;

@end
