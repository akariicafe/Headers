@class CastleIMAPAccount;

@interface _MFNewcastleAuthenticator : MFSASLAuthenticator {
    BOOL _sentResponse;
}

@property (retain, nonatomic) CastleIMAPAccount *castleAccount;

- (id)saslName;
- (void)dealloc;
- (id)responseForServerData:(id)a0;
- (BOOL)justSentPlainTextPassword;
- (BOOL)supportsInitialClientResponse;
- (id)initWithAuthScheme:(id)a0 account:(id)a1 connection:(id)a2;

@end
