@class NSString;

@interface YahooAccount : IMAPAccount <MFOAuth2TokenAuthProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostname;
+ (id)displayedAccountTypeString;
+ (id)authSchemesForAccountClass;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)isSSLEditable;
+ (BOOL)usesSSL;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (BOOL)usernameIsEmailAddress;
+ (BOOL)getConfigurationFromServerForEmail:(id)a0;
+ (id)accountTypeIdentifier;
+ (id)emailAddressWithUsername:(id)a0;
+ (id)deliveryAccountHostname;
+ (BOOL)deliveryAccountUsesSSL;
+ (unsigned int)deliveryAccountPortNumber;
+ (id)emailAddressHostPart;

- (id)hostname;
- (id)preferredAuthScheme;
- (unsigned int)portNumber;
- (unsigned long long)credentialAccessibility;
- (id)emailAddressStrings;
- (id)statisticsKind;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (id)iconString;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (unsigned long long)minUID;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)a0;
- (id)_defaultSpecialMailboxNameForType:(int)a0;
- (id)transferDisabledMailboxUids;
- (id)displayUsername;
- (id)URLForMessage:(id)a0;
- (id)saveSentFolder;
- (BOOL)supportsFastRemoteBodySearch;

@end
