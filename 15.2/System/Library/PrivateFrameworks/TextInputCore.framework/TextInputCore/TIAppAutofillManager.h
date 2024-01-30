@class SFAppAutoFillOneTimeCodeProvider, NSUUID, NSString, NSDictionary, NSDate, LAContext, TIKeyboardSecureCandidateRenderer;

@interface TIAppAutofillManager : NSObject <SFAppAutoFillOneTimeCodeProviderObserver> {
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
    SFAppAutoFillOneTimeCodeProvider *_oneTimeCodeProvider;
}

@property (retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync;
@property (retain, nonatomic) NSDictionary *queuedCustomInfo;
@property (retain, nonatomic) NSDictionary *queuedUnauthenticatedCustomInfo;
@property (retain, nonatomic) NSDate *dateOfLastPasswordAutoFill;
@property (copy, nonatomic) NSString *lastAutofilledUsername;
@property (retain, nonatomic) LAContext *laContext;
@property (readonly, nonatomic) BOOL hasOneTimeCode;
@property (readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getCredentialsWithApplicationIdentifier:(id)a0 autofillContext:(id)a1;
- (id)generateAutofillFormCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (void)oneTimeCodeProviderReceivedCode:(id)a0;
- (void)oneTimeCodeProvider:(id)a0 didUpdateOneTimeCode:(id)a1;
- (void)shouldAcceptAutofill:(id)a0 withPayload:(id)a1 completion:(id /* block */)a2;
- (BOOL)isValidedString:(id)a0;
- (id)initPrivate;
- (id)obtainBundleIdentifierFromConnection:(id)a0;
- (void)obtainCredential:(id)a0;
- (void).cxx_destruct;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)a0;
- (BOOL)_simulatesAutofillCandidates;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (id)customInfoFromCredential:(id)a0;
- (BOOL)shouldAuthenticateToAcceptAutofill;
- (id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (id)obtainApplicationIdentifierFromConnection:(id)a0;
- (void)shouldAcceptOneTimeCode:(id)a0 completion:(id /* block */)a1;
- (void)reset;

@end
