@class HKConcept, NSArray, HKIntegerSet, NSNumber;

@interface HKMedicationSearchResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKConcept *tradeNameProduct;
@property (readonly, copy, nonatomic) NSArray *clinicalProducts;
@property (readonly, copy, nonatomic) NSArray *routedDoseFormProducts;
@property (readonly, copy, nonatomic) NSArray *ingredientProducts;
@property (readonly, nonatomic) long long debug_traversedNodeCount;
@property (readonly, copy, nonatomic) NSNumber *seedHgId;
@property (readonly, copy, nonatomic) HKConcept *specificProduct;
@property (readonly, copy, nonatomic) HKIntegerSet *traversedRelationships;
@property (readonly, nonatomic) long long traversedDepth;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)_visit:(id)a0 ofRoot:(id)a1 withMaxDepth:(long long)a2 handler:(id /* block */)a3;
- (id)initWithSeedHgId:(id)a0 specificProduct:(id)a1 traversedRelationships:(id)a2 traversedDepth:(long long)a3;

@end
