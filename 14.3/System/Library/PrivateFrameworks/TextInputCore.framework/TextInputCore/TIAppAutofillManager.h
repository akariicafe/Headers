@class NSUUID, NSString, NSDictionary, LAContext, TIKeyboardSecureCandidateRenderer;

@interface TIAppAutofillManager : NSObject {
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
    id _oneTimeCodeProvider;
}

@property (retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync;
@property (retain, nonatomic) NSDictionary *queuedCustomInfo;
@property (retain, nonatomic) NSDictionary *queuedUnauthenticatedCustomInfo;
@property (retain, nonatomic) LAContext *laContext;
@property (readonly, nonatomic) BOOL hasOneTimeCode;
@property (readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;

+ (id)sharedInstance;

- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (id)initPrivate;
- (id)generateAutofillFormCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldAuthenticateToAcceptAutofill;
- (void)shouldAcceptOneTimeCode:(id)a0 completion:(id /* block */)a1;
- (void)appAutoFillOneTimeCodeProviderReceivedOneTimeCode:(id)a0;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)a0;
- (BOOL)isValidedString:(id)a0;
- (id)customInfoFromCredential:(id)a0;
- (void)shouldAcceptAutofill:(id)a0 withPayload:(id)a1 completion:(id /* block */)a2;
- (id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (id)getCredentialsWithApplicationIdentifier:(id)a0 autofillContext:(id)a1;
- (void)obtainCredential:(id)a0;
- (id)obtainBundleIdentifierFromConnection:(id)a0;
- (id)obtainApplicationIdentifierFromConnection:(id)a0;
- (BOOL)_simulatesAutofillCandidates;

@end
