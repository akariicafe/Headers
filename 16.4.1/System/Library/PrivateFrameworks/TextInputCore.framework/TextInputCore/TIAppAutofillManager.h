@class NSUUID, NSString, NSDate, SFAppAutoFillPasskeyProvider, LAContext, NSDictionary, TIKeyboardSecureCandidateRenderer, SFAppAutoFillOneTimeCodeProvider;

@interface TIAppAutofillManager : NSObject <SFAppAutoFillOneTimeCodeProviderObserver> {
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
    SFAppAutoFillOneTimeCodeProvider *_oneTimeCodeProvider;
    SFAppAutoFillPasskeyProvider *_passkeyProvider;
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

- (BOOL)_simulatesAutofillCandidates;
- (id)customInfoFromCredential:(id)a0;
- (void)oneTimeCodeProvider:(id)a0 didUpdateOneTimeCode:(id)a1;
- (BOOL)hasAutofillContextEntitlementForConnection:(id)a0;
- (void)generateJustHMEAutofillFormSuggestionWithRenderTraits:(id)a0 withKeyboardState:(id)a1 applicationID:(id)a2 applicationBundleID:(id)a3 completionHandler:(id /* block */)a4;
- (id)obtainBundleIdentifierFromConnection:(id)a0;
- (id)_autoFillPayloadForPasswordCredential:(id)a0 keyboardInfoType:(unsigned long long *)a1;
- (void)shouldAcceptOneTimeCode:(id)a0 completion:(id /* block */)a1;
- (id)_secureCandidateForPasskey:(id)a0 fromLocalizedStringKey:(id)a1;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (id)_autoFillPayloadForPasskey:(id)a0 keyboardInfoType:(unsigned long long *)a1;
- (void)generateHideMyEmailCandidateWithSlotID:(unsigned int)a0 applicationBundleId:(id)a1 applicationId:(id)a2 keyboardState:(id)a3 completionHandler:(id /* block */)a4;
- (void)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)a0 withKeyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (id)generateAutofillFormCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (void)getCredentialsWithApplicationIdentifier:(id)a0 autofillContext:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initPrivate;
- (BOOL)isValidedString:(id)a0;
- (void)presentHideMyEmailUI:(id)a0 keyboardState:(id)a1 completion:(id /* block */)a2;
- (void)obtainCredential:(id)a0;
- (BOOL)shouldAuthenticateToAcceptAutofill;
- (id)_secureCandidateForPasswordCredential:(id)a0 fromLocalizedStringKey:(id)a1;
- (id)obtainApplicationIdentifierFromConnection:(id)a0;
- (void)oneTimeCodeProviderReceivedCode:(id)a0;
- (void)shouldAcceptAutofill:(id)a0 withPayload:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)a0;
- (void)reset;

@end
