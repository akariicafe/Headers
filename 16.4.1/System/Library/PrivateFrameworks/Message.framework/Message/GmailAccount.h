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
+ (id)authSchemesForAccountClass;
+ (id)deliveryAccountHostname;
+ (unsigned int)deliveryAccountPortNumber;
+ (BOOL)deliveryAccountUsesSSL;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (id)imapNotEnabledPrefix;
+ (BOOL)isPredefinedAccountType;
+ (BOOL)usernameIsEmailAddress;

- (id)hostname;
- (id)accountStore;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)setPassword:(id)a0;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)clientToken;
- (id)emailAddressStrings;
- (void)_removeCredential:(id)a0;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)a0;
- (id)specialUseAttributesForMailbox:(id)a0;
- (id)_URLFromUncleanString:(id)a0;
- (id)_childOfMailbox:(id)a0 withComponentName:(id)a1;
- (id)_consumeExistingPreAuthToken;
- (void)_deleteHook;
- (id)_webLoginErrorWithURL:(id)a0;
- (id)allMailMailboxUid;
- (int)archiveDestinationForMailbox:(id)a0;
- (unsigned long long)credentialAccessibility;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)displayNameUsingSpecialNamesForMailboxUid:(id)a0;
- (int)emptyFrequencyForMailboxType:(int)a0;
- (BOOL)enableAccount;
- (id)errorForResponse:(id)a0;
- (id)iconString;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (BOOL)mustArchiveSentMessages;
- (void)persistentAccountDidChange:(id)a0 previousAccount:(id)a1;
- (id)persistentNameForMailbox:(id)a0;
- (id)preferredAuthScheme;
- (BOOL)shouldArchiveByDefault;
- (BOOL)shouldEnableAfterError:(id)a0;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (id)specialUseAttributeForType:(int)a0;
- (id)statisticsKind;
- (BOOL)supportsArchiving;
- (BOOL)supportsFastRemoteBodySearch;
- (BOOL)xListSupportedOnConnection:(id)a0;

@end
