@class NSString;

@interface YahooAccount : IMAPAccount <MFOAuth2TokenAuthProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostname;
+ (BOOL)usesSSL;
+ (id)accountTypeIdentifier;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (id)authSchemesForAccountClass;
+ (id)deliveryAccountHostname;
+ (unsigned int)deliveryAccountPortNumber;
+ (BOOL)deliveryAccountUsesSSL;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (id)emailAddressWithUsername:(id)a0;
+ (BOOL)getConfigurationFromServerForEmail:(id)a0;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)isSSLEditable;
+ (BOOL)usernameIsEmailAddress;

- (id)emailAddresses;
- (id)hostname;
- (unsigned int)portNumber;
- (void)dealloc;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)a0;
- (id)displayUsername;
- (id)URLForMessage:(id)a0;
- (id)_defaultSpecialMailboxNameForType:(int)a0;
- (unsigned long long)credentialAccessibility;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)iconString;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (id)preferredAuthScheme;
- (id)saveSentFolder;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (id)statisticsKind;
- (BOOL)supportsFastRemoteBodySearch;
- (id)transferDisabledMailboxUids;
- (unsigned long long)minUID;

@end
