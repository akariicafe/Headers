@class NSString, NSDecimalNumber, NSArray;

@interface PKAccountFeatureDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDecimalNumber *minimumAmount;
@property (copy, nonatomic) NSDecimalNumber *maximumAmount;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSArray *supportedNetworks;
@property (nonatomic) unsigned long long merchantCapabilities;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAccountFeatureDescriptor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
