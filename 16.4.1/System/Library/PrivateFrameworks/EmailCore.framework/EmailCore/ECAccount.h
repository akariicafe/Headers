@class ACAccountCredential, NSString, NSArray, EFLazyCache, NSDictionary, ACAccount, NSObject, ACAccountStore;
@protocol OS_os_log;

@interface ECAccount : NSObject <EFLoggable, EFPubliclyDescribable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) ACAccount *systemAccount;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, copy, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic) EFLazyCache *cache;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) ACAccountCredential *credential;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, copy, nonatomic) NSString *accountTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *authenticationScheme;
@property (nonatomic) BOOL allowInsecureAuthentication;
@property (nonatomic) BOOL configureDynamically;
@property (readonly, copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *oauthToken;
@property (nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isAppleAccount;
@property (readonly, nonatomic) BOOL isAppleEmployeeAccount;
@property (readonly, nonatomic) BOOL isYahooAccount;
@property (readonly, nonatomic) BOOL isGmailAccount;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) BOOL isPersonaAccount;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPasswordCredential;
@property (readonly, copy, nonatomic) NSArray *standardPorts;
@property (readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property (readonly, nonatomic) long long defaultPortNumber;
@property (readonly, nonatomic) long long defaultSecurePortNumber;
@property (nonatomic) long long portNumber;
@property (nonatomic) BOOL sslIsDirect;
@property (readonly, nonatomic) BOOL sslIsDirectIsSet;
@property (nonatomic) BOOL usesSSL;
@property (copy, nonatomic) NSString *accountDirectoryTildeAbbreviatedPath;
@property (nonatomic) long long numberOfDaysToKeepTrash;
@property (nonatomic) long long numberOfDaysToKeepJunk;
@property (nonatomic) BOOL deleteMessagesInPlace;
@property (copy, nonatomic) NSString *draftsMailboxName;
@property (copy, nonatomic) NSString *outboxMailboxName;
@property (copy, nonatomic) NSString *sentMessagesMailboxName;
@property (copy, nonatomic) NSString *trashMailboxName;
@property (copy, nonatomic) NSString *junkMailboxName;
@property (copy, nonatomic) NSString *notesMailboxName;
@property (copy, nonatomic) NSString *toDosMailboxName;
@property (copy, nonatomic) NSString *archiveMailboxName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

+ (id)standardSSLPorts;
+ (id)standardPorts;

- (BOOL)setSslIsDirectIsSet;
- (void)_accountStoreDidChange:(id)a0;
- (void)refresh;
- (void)setDataClassProperty:(id)a0 forKey:(id)a1;
- (void)renewCredentialsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)_hostnameFromParentAccount:(id)a0;
- (id)initWithSystemAccount:(id)a0;
- (id)dataClassPropertyForKey:(id)a0;
- (id)initWithSystemAccount:(id)a0 accountStore:(id)a1;
- (id)_cachedParentAccount;
- (id)portNumberObject;
- (BOOL)isEnabledForDataclass:(id)a0;
- (id)usesSSLObject;
- (void)setOAuth2Token:(id)a0 refreshToken:(id)a1;
- (void)clearUsesSSL;
- (id)enabledDataclasses;
- (void)clearSSLIsDirect;
- (BOOL)_cachedEnabled;
- (void).cxx_destruct;

@end
