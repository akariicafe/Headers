@class NSString, NSArray, NEVPNIKEv2SecurityAssociationParameters;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec

@property BOOL wakeForRekey;
@property (readonly) NSString *pluginType;
@property (retain) NSArray *IKESecurityAssociationParametersArray;
@property (retain) NSArray *childSecurityAssociationParametersArray;
@property (copy) NSString *providerBundleIdentifier;
@property int natKeepAliveOffloadEnable;
@property int natKeepAliveOffloadInterval;
@property int disableMOBIKERetryOnWake;
@property BOOL opportunisticPFS;
@property long long tunnelKind;
@property BOOL disableInitialContact;
@property long long deadPeerDetectionRate;
@property (copy) NSString *serverCertificateIssuerCommonName;
@property (copy) NSString *serverCertificateCommonName;
@property long long certificateType;
@property BOOL useConfigurationAttributeInternalIPSubnet;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters;
@property BOOL disableMOBIKE;
@property BOOL disableRedirect;
@property BOOL enablePFS;
@property BOOL enableRevocationCheck;
@property BOOL strictRevocationCheck;
@property long long minimumTLSVersion;
@property long long maximumTLSVersion;
@property BOOL enableFallback;
@property unsigned long long mtu;

+ (BOOL)supportsSecureCoding;

- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)clone;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)setPluginType:(id)a0;
- (id)initWithPluginType:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
