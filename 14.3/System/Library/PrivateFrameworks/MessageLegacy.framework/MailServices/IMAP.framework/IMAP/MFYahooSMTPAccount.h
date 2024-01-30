@class YahooAccount, NSString;

@interface MFYahooSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol>

@property (retain, nonatomic, getter=mailAccountIfAvailable) YahooAccount *mailAccount;
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
- (BOOL)shouldUseAuthentication;
- (void)dealloc;
- (id)displayHostname;
- (BOOL)usesSSL;
- (id)username;
- (id)password;

@end
