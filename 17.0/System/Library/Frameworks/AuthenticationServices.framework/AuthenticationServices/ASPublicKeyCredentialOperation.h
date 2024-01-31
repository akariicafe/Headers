@class NSUUID, NSString, NSError, NSData, _WKWebAuthenticationPanel, LAContext, NSDictionary, WBSSavedAccountContext, NSObject, ASCPublicKeyCredentialAssertionOptions, NSMutableDictionary, ASCPublicKeyCredentialCreationOptions;
@protocol ASPublicKeyCredentialManagerDelegate, OS_os_activity, OS_dispatch_semaphore;

@interface ASPublicKeyCredentialOperation : NSObject {
    NSObject<OS_dispatch_semaphore> *_internalSemaphore;
    NSMutableDictionary *_identifiersToAssertionResponses;
    id /* block */ _selectPlatformAssertionCallback;
    id /* block */ _selectSecurityKeyAssertionCallback;
}

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) id<ASPublicKeyCredentialManagerDelegate> delegate;
@property (copy, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) _WKWebAuthenticationPanel *panel;
@property (copy, nonatomic) NSString *sourceApplicationIdentifier;
@property (nonatomic) BOOL shouldRequireUserVerification;
@property (readonly, copy, nonatomic) NSDictionary *identifiersToAssertionResponses;
@property (retain, nonatomic) LAContext *authenticatedLAContext;
@property (copy, nonatomic) NSError *overrideError;
@property (readonly, nonatomic) BOOL hasTornDown;
@property (readonly, nonatomic) BOOL hasSelectedAssertion;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) WBSSavedAccountContext *savedAccountContext;
@property (copy, nonatomic) ASCPublicKeyCredentialCreationOptions *creationOptions;
@property (copy, nonatomic) ASCPublicKeyCredentialAssertionOptions *assertionOptions;
@property (copy, nonatomic) NSData *clientDataJSONForApps;

- (void).cxx_destruct;
- (id)initWithRelyingPartyIdentifier:(id)a0 delegate:(id)a1 parentActivity:(id)a2;
- (void)mergeIdentifiersToAssertionResponses:(id)a0;
- (void)selectPlatformAssertion:(id)a0;
- (void)selectSecurityKeyAssertion:(id)a0;
- (void)setPlatformAssertionSelectionCallback:(id /* block */)a0;
- (void)setSecurityKeyAssertionSelectionCallback:(id /* block */)a0;
- (void)tearDownIfNecessary;

@end
