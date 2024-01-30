@class NSString, CWFEAPCredentials, CWFNetworkProfile, CWFScanResult;

@interface CWFAssocParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CWFScanResult *scanResult;
@property (copy, nonatomic) CWFNetworkProfile *knownNetworkProfile;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) CWFEAPCredentials *EAPCredentials;
@property (nonatomic) BOOL rememberUponSuccessfulAssociation;
@property (nonatomic) long long bandPreference;
@property (copy, nonatomic) NSString *colocatedScopeID;
@property (nonatomic) BOOL forceBSSID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToAssocParameters:(id)a0;

@end
