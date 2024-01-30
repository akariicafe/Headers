@interface DMCServiceDiscoveryHelper : NSObject

- (id)_serverURLForAppleMAID;
- (void)_discoverServiceURLForDomain:(id)a0 port:(id)a1 userIdentifier:(id)a2 anchorCertificateRefs:(id)a3 completionHandler:(id /* block */)a4;
- (id)webAuthenticationURLForUserAuthURL:(id)a0 withUserIdentifierQuery:(id)a1;
- (void)_serviceURLFromWellKnownURL:(id)a0 anchorCertificateRefs:(id)a1 completionHandler:(id /* block */)a2;
- (void)discoverServiceURLForUserIdentifier:(id)a0 anchorCertificateRefs:(id)a1 completionHandler:(id /* block */)a2;
- (void)discoverEnrollmentMethodWithServiceURL:(id)a0 enrollmentType:(unsigned long long)a1 machineInfo:(id)a2 anchorCertificateRefs:(id)a3 completionHandler:(id /* block */)a4;
- (void)exchangeMAIDForBearerTokenWithRMAccountIdentifier:(id)a0 userAuthURL:(id)a1 machineInfo:(id)a2 anchorCertificateRefs:(id)a3 completionHandler:(id /* block */)a4;
- (id)abstractWebAuthCredentialTokenFromCallBackURL:(id)a0;
- (void)fetchEnrollmentProfileWithServiceURL:(id)a0 authToken:(id)a1 machineInfo:(id)a2 anchorCertificateRefs:(id)a3 completionHandler:(id /* block */)a4;

@end
