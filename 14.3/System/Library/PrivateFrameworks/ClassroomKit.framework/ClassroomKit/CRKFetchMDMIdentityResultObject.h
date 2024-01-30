@class NSData, NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject

@property (retain, nonatomic) NSData *mdmIdentityPersistentID;
@property (retain, nonatomic) NSString *mdmIdentityCommonName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
