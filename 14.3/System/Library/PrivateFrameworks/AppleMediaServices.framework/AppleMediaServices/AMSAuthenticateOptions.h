@class NSString, NSDictionary, NSURL, AMSProcessInfo;

@interface AMSAuthenticateOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _authenticationType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL allowSecondaryCredentialSource;
@property (retain, nonatomic) NSString *companionDeviceClientInfo;
@property (retain, nonatomic) NSString *companionDeviceUDID;
@property (nonatomic, getter=isDemoAccountSetup) BOOL demoAccountSetup;
@property (nonatomic) BOOL ephemeral;
@property (nonatomic) long long serviceType;
@property (readonly, nonatomic, getter=isRemoteProxyAuthentication) BOOL remoteProxyAuthentication;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) BOOL allowServerDialogs;
@property (nonatomic) unsigned long long authenticationType;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (retain, nonatomic) NSString *cancelButtonString;
@property (nonatomic) BOOL canMakeAccountActive;
@property (retain, nonatomic) NSDictionary *createAccountQueryParams;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) unsigned long long credentialSource;
@property (retain, nonatomic) NSString *debugReason;
@property (retain, nonatomic) NSString *defaultButtonString;
@property (nonatomic) BOOL enableAccountCreation;
@property (retain, nonatomic) NSDictionary *HTTPHeaders;
@property (retain, nonatomic) NSURL *iconBundleURL;
@property (nonatomic) BOOL ignoreAccountConversion;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSString *promptTitle;
@property (retain, nonatomic) NSString *proxyAppBundleID;
@property (retain, nonatomic) NSString *proxyAppName;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSString *userAgentSuffix;
@property (nonatomic) BOOL usernameEditable;

- (void)setMediaType:(id)a0;
- (id)mediaType;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)optionsDictionaryForRemoteProxyAuthentication;
- (void)setAuthKitData:(id)a0;
- (void)setPresentingViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)authKitData;
- (id)presentingViewController;
- (BOOL)isEqual:(id)a0;
- (id)optionsDictionary;
- (id)initWithOptionsDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
