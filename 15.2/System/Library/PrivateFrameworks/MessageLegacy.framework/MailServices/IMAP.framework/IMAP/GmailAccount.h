@class NSString, EFPromise, NSURLCredential;

@interface GmailAccount : IMAPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol, NSURLSessionDataDelegate> {
    EFPromise *_enablingPromise;
    NSURLCredential *_credential;
    NSString *_clientToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hostname;
+ (id)accountTypeIdentifier;
+ (id)displayedAccountTypeString;
+ (id)authSchemesForAccountClass;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)usernameIsEmailAddress;
+ (id)deliveryAccountHostname;
+ (BOOL)deliveryAccountUsesSSL;
+ (unsigned int)deliveryAccountPortNumber;
+ (id)emailAddressHostPart;
+ (id)imapNotEnabledPrefix;

- (id)hostname;
- (id)accountStore;
- (void)setPassword:(id)a0;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)emailAddresses;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (BOOL)shouldArchiveByDefault;
- (void)dealloc;
- (BOOL)supportsArchiving;
- (id)clientToken;
- (void)persistentAccountDidChange:(id)a0 previousAccount:(id)a1;
- (id)preferredAuthScheme;
- (unsigned long long)credentialAccessibility;
- (id)statisticsKind;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldEnableAfterError:(id)a0;
- (BOOL)enableAccount;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (int)emptyFrequencyForMailboxType:(int)a0;
- (id)allMailMailboxUid;
- (id)iconString;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)a0;
- (void)_deleteHook;
- (id)_childOfMailbox:(id)a0 withComponentName:(id)a1;
- (BOOL)archiveSentMessages;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)a0;
- (id)persistentNameForMailbox:(id)a0;
- (int)archiveDestinationForMailbox:(id)a0;
- (BOOL)supportsFastRemoteBodySearch;
- (id)errorForResponse:(id)a0;
- (void)_removeCredential:(id)a0;
- (id)_consumeExistingPreAuthToken;
- (id)_URLFromUncleanString:(id)a0;
- (id)_webLoginErrorWithURL:(id)a0;
- (id)specialUseAttributeForType:(int)a0;
- (id)specialUseAttributesForMailbox:(id)a0;
- (BOOL)xListSupportedOnConnection:(id)a0;

@end
