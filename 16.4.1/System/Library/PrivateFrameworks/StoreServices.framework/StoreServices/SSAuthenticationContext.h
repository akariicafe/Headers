@class NSString, NSDictionary, NSArray, NSNumber, SSURLBagContext;

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL allowsBioAuthentication;
@property (readonly, nonatomic) BOOL allowsBootstrapCellularData;
@property (readonly, copy, nonatomic) NSString *cancelButtonLabel;
@property (readonly, copy, nonatomic) NSString *clientIdentifierHeader;
@property (readonly, nonatomic) BOOL displaysOnLockScreen;
@property (readonly, nonatomic, getter=isDemoAccount) BOOL demoAccount;
@property (readonly, copy, nonatomic) NSString *logUUID;
@property (readonly, copy, nonatomic) NSString *okButtonLabel;
@property (readonly, nonatomic) BOOL persistsAcrossDeviceLock;
@property (readonly, copy, nonatomic) NSString *promptTitle;
@property (readonly, copy, nonatomic) NSString *reasonDescription;
@property (readonly, nonatomic) BOOL shouldIgnoreProtocol;
@property (readonly, nonatomic) long long tokenType;
@property (readonly, nonatomic) SSURLBagContext *URLBagContext;
@property (readonly, nonatomic) BOOL forceDaemonAuthentication;
@property (readonly, nonatomic) BOOL shouldPersonalizeResponseActions;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly) long long accountScope;
@property (readonly, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;
@property (readonly, nonatomic) BOOL allowsRetry;
@property (readonly, nonatomic) BOOL allowsSilentAuthentication;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) BOOL canCreateNewAccount;
@property (readonly, nonatomic) BOOL canSetActiveAccount;
@property (readonly, copy, nonatomic) NSDictionary *HTTPHeaders;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *passwordEquivalentToken;
@property (readonly, copy, nonatomic) NSString *initialPassword;
@property (readonly, nonatomic) BOOL persistsPasswordFallback;
@property (readonly, copy, nonatomic) NSString *preferredITunesStoreClient;
@property (readonly, nonatomic) long long promptStyle;
@property (readonly, copy, nonatomic) NSDictionary *requestParameters;
@property (readonly, retain, nonatomic) NSNumber *requiredUniqueIdentifier;
@property (readonly, nonatomic) BOOL shouldCreateNewSession;
@property (readonly, nonatomic) BOOL shouldFollowAccountButtons;
@property (readonly, nonatomic) BOOL shouldIgnoreAccountConversion;
@property (readonly, nonatomic) BOOL shouldSuppressDialogs;
@property (readonly, copy, nonatomic) NSDictionary *signupRequestParameters;
@property (readonly, copy, nonatomic) NSString *touchIDContinueToken;
@property (readonly, copy, nonatomic) NSArray *userAgentComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextForSignIn;

- (id)initWithAccount:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)initWithAccountIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_allowCreateAccount;
- (void)_copyIvarsToCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)_initSSAuthenticationContext;
- (id)accountStoreOptions;

@end
