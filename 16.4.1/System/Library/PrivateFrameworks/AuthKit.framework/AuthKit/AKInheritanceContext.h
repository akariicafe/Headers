@class AKBeneficiaryManifest, NSString, NSDictionary, AKDevice, AKInheritanceAccessKey;

@interface AKInheritanceContext : NSObject <AKAuthenticationContext, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *beneficiaryIdentifier;
@property (copy, nonatomic) NSString *beneficiarySetupToken;
@property (retain, nonatomic) AKBeneficiaryManifest *manifest;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long serviceType;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) unsigned long long authenticationMode;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;
@property (nonatomic) BOOL cliMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAuthenticationContext:(id)a0;
- (id)initWithOwnerAltDSID:(id)a0;

@end
