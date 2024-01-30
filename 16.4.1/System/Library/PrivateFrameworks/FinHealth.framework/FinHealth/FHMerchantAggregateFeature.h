@class NSString;

@interface FHMerchantAggregateFeature : FHAggregateFeature

@property (copy, nonatomic) NSString *merchantID;
@property (copy, nonatomic) NSString *merchantDisplayName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMerchantID:(id)a0 merchantDisplayName:(id)a1;

@end
