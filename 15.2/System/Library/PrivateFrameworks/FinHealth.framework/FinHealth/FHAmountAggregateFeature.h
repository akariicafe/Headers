@class NSString;

@interface FHAmountAggregateFeature : FHAggregateFeature

@property (copy, nonatomic) NSString *comparator;
@property (nonatomic) unsigned long long amount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithAmount:(unsigned long long)a0 comparator:(id)a1;

@end
