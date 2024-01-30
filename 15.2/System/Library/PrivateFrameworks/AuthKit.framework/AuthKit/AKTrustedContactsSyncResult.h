@class NSArray, NSString;

@interface AKTrustedContactsSyncResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *orphanedCustodianUUIDs;
@property (copy, nonatomic) NSString *custodianListVersion;
@property (copy, nonatomic) NSArray *orphanedBeneficiaryUUIDs;
@property (copy, nonatomic) NSString *beneficiaryListVersion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
