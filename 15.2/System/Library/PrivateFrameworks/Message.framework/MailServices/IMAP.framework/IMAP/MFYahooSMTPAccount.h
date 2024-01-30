@class YahooAccount, NSString;

@interface MFYahooSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol>

@property (retain, nonatomic, getter=mailAccountIfAvailable) YahooAccount *mailAccount;
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
- (id)preferredAuthScheme;
- (id)accountForRenewingCredentials;
- (id)oauth2Token;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldUseAuthentication;
- (id)displayHostname;

@end
