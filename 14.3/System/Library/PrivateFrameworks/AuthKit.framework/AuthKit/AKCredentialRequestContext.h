@class NSUUID, NSString, AKAuthorizationUpgradeContext, NSArray, NSData, NSValue, AKAuthorizationRequest, AKPasswordRequest, NSNumber;

@interface AKCredentialRequestContext : NSObject <NSCopying, NSSecureCoding> {
    BOOL _passcodeProtected;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL _shouldForceUI;
@property (nonatomic) BOOL _shouldSkipBiometrics;
@property (nonatomic) BOOL _shouldSkipAuthorizationUI;
@property (nonatomic) BOOL _shouldForcePrivateEmail;
@property (nonatomic) BOOL _requirePassword;
@property (nonatomic) BOOL _isWebLogin;
@property (nonatomic) BOOL _isFirstPartyLogin;
@property (nonatomic) BOOL _isRapportLogin;
@property (readonly, nonatomic) BOOL _isEligibleForUpgradeFromPassword;
@property (retain, nonatomic) NSString *_callerBundleID;
@property (readonly, nonatomic) AKAuthorizationUpgradeContext *_upgradeContext;
@property (retain, nonatomic) NSString *_proxiedClientAppName;
@property (retain, nonatomic) NSString *_proxiedClientBundleID;
@property (retain, nonatomic) NSString *_proxiedClientServiceID;
@property (retain, nonatomic) NSString *_proxiedClientTeamID;
@property (retain, nonatomic) NSString *_proxiedClientAppID;
@property (retain, nonatomic) NSArray *_proxiedAssociatedDomains;
@property (retain, nonatomic) NSString *_proxiedDeviceName;
@property (retain, nonatomic) NSString *_proxiedDeviceClass;
@property (copy, nonatomic) NSString *_iconName;
@property (copy, nonatomic) NSData *_iconData;
@property (copy, nonatomic) NSNumber *_iconScale;
@property (copy, nonatomic) NSValue *_iconSize;
@property (copy, nonatomic) NSString *_informativeText;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property (retain, nonatomic) AKAuthorizationRequest *authorizationRequest;
@property (retain, nonatomic) AKPasswordRequest *passwordRequest;
@property (retain, nonatomic) NSArray *credentialRequests;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithUpgradeContext:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
