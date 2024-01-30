@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable *_factors;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)factorizationWithFactorsAndExponents:(id)a0;
+ (id)factorizationWithFactor:(id)a0 exponent:(long long)a1;
+ (id)factorization;
+ (id)factorizationFromString:(id)a0 factorGrammar:(id)a1;

- (id)unitString;
- (void)enumerateFactorsWithHandler:(id /* block */)a0;
- (id)anyFactor;
- (id)init;
- (void).cxx_destruct;
- (void)_raiseToExponent:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reciprocal;
- (long long)_exponentForFactor:(id)a0;
- (unsigned long long)hash;
- (long long)exponentForFactor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)factorizationByDividing:(id)a0;
- (id)description;
- (id)factorizationByRaisingToExponent:(long long)a0;
- (id)factorizationByMultiplying:(id)a0;
- (void)_enumerateFactorsWithHandler:(id /* block */)a0;
- (void)_multiplyByFactor:(id)a0 exponent:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (void)_multiplyByFactorization:(id)a0;
- (unsigned long long)factorCount;
- (void)encodeWithCoder:(id)a0;

@end
