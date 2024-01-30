@class NSString;

@interface YahooAccount : IMAPAccount <MFOAuth2TokenAuthProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostname;
+ (id)accountTypeIdentifier;
+ (BOOL)usesSSL;
+ (id)displayedAccountTypeString;
+ (id)authSchemesForAccountClass;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)isSSLEditable;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (BOOL)usernameIsEmailAddress;
+ (BOOL)getConfigurationFromServerForEmail:(id)a0;
+ (id)emailAddressWithUsername:(id)a0;
+ (id)deliveryAccountHostname;
+ (BOOL)deliveryAccountUsesSSL;
+ (unsigned int)deliveryAccountPortNumber;
+ (id)emailAddressHostPart;

- (id)hostname;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (unsigned long long)credentialAccessibility;
- (id)emailAddressStrings;
- (id)statisticsKind;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (id)iconString;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)a0;
- (id)_defaultSpecialMailboxNameForType:(int)a0;
- (id)transferDisabledMailboxUids;
- (id)displayUsername;
- (id)URLForMessage:(id)a0;
- (id)saveSentFolder;
- (BOOL)supportsFastRemoteBodySearch;

@end
