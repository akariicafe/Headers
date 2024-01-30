@class NSString, NSDictionary, NSArray, NSDate;

@interface IDSPseudonymProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double expiryEpoch;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *featureID;
@property (readonly, nonatomic) NSString *scopeID;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSArray *allowedServices;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPseudonymProperties:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)withUpdatedExpiryEpoch:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)withUpdatedAllowedServices:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)willBeExpiredIn:(double)a0;
- (BOOL)hasBeenExpiredForAtLeast:(double)a0;
- (id)initWithFeatureID:(id)a0 scopeID:(id)a1 expiryEpoch:(double)a2 allowedServices:(id)a3;

@end
