@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable *_factors;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)factorization;
+ (id)factorizationWithFactor:(id)a0 exponent:(long long)a1;
+ (id)factorizationWithFactorsAndExponents:(id)a0;
+ (id)factorizationFromString:(id)a0 factorGrammar:(id)a1;

- (unsigned long long)factorCount;
- (id)reciprocal;
- (void)encodeWithCoder:(id)a0;
- (void)_multiplyByFactorization:(id)a0;
- (void)_raiseToExponent:(long long)a0;
- (void)_enumerateFactorsWithHandler:(id /* block */)a0;
- (id)description;
- (id)factorizationByDividing:(id)a0;
- (id)factorizationByMultiplying:(id)a0;
- (void)_multiplyByFactor:(id)a0 exponent:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (long long)exponentForFactor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)unitString;
- (id)factorizationByRaisingToExponent:(long long)a0;
- (unsigned long long)hash;
- (long long)_exponentForFactor:(id)a0;
- (id)anyFactor;
- (void)enumerateFactorsWithHandler:(id /* block */)a0;

@end
