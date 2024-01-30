@class GmailAccount, NSString;

@interface MFGmailSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol>

@property (retain, nonatomic, getter=mailAccountIfAvailable) GmailAccount *mailAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountTypeIdentifier;

- (id)hostname;
- (id)preferredAuthScheme;
- (id)accountForRenewingCredentials;
- (unsigned int)portNumber;
- (id)oauth2Token;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (id)clientToken;
- (BOOL)shouldUseAuthentication;
- (void)dealloc;
- (id)displayHostname;
- (BOOL)usesSSL;
- (id)username;
- (id)errorForResponse:(id)a0;
- (id)password;
- (id)_urlFromResponse:(id)a0;

@end
