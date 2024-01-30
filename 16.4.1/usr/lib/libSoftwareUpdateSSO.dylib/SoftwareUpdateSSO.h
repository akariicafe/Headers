@class SoftwareUpdateExtensibleSSOAuthenticator, NSString, NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface SoftwareUpdateSSO : NSObject <SoftwareUpdateExtensibleSSOAuthenticatorDelegate> {
    NSObject<OS_dispatch_semaphore> *SoftwareUpdateSSOCompletionSemaphore;
}

@property (retain) SoftwareUpdateExtensibleSSOAuthenticator *authenticator;
@property (retain) NSDictionary *defaultAuthParameters;
@property (retain) NSString *appIdentifier;
@property (retain) NSString *userName;
@property (retain) NSString *envIdentifier;
@property (retain) NSString *dawToken;
@property (retain) NSString *interactivityLevel;
@property (copy, nonatomic) id /* block */ resultCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)authenticator:(id)a0 didCompleteWithError:(id)a1;
- (void)authenticator:(id)a0 didCompleteWithResult:(id)a1;
- (id)buildSSOError:(int)a0 underlying:(id)a1 description:(id)a2;
- (void)copyTokenFromAuthenticatorResponse:(id)a0 error:(id)a1;
- (id)getDawToken;
- (void)setupAuthenticator;
- (BOOL)ssoIsSupported;

@end
