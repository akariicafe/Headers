@class NSString;

@interface RTAddressSubPremise : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long subPremiseType;
@property (readonly, copy, nonatomic) NSString *subPremise;

+ (id)stringForSubPremiseType:(long long)a0;

- (id)init;
- (id)initWithSubPremise:(id)a0 subPremiseType:(long long)a1;
- (BOOL)isEqualToAddressSubPremise:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
