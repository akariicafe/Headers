@class GmailAccount, NSString;

@interface MFGmailSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol>

@property (retain, nonatomic, getter=mailAccountIfAvailable) GmailAccount *mailAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountTypeIdentifier;

- (id)hostname;
- (id)username;
- (id)password;
- (void).cxx_destruct;
- (BOOL)usesSSL;
- (unsigned int)portNumber;
- (id)clientToken;
- (id)preferredAuthScheme;
- (id)accountForRenewingCredentials;
- (id)oauth2Token;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldUseAuthentication;
- (id)displayHostname;
- (id)errorForResponse:(id)a0;
- (id)_urlFromResponse:(id)a0;

@end
