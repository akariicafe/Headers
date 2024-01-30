@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount

@property (retain, nonatomic) CastleIMAPAccount *castleAccount;

+ (id)accountTypeIdentifier;

- (void).cxx_destruct;
- (id)accountForRenewingCredentials;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldUseAuthentication;
- (id)mailAccountIfAvailable;
- (id)displayHostname;

@end
