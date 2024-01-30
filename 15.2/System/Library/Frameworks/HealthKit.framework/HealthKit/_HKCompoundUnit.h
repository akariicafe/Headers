@class _HKFactorization, _HKDimension;

@interface _HKCompoundUnit : HKUnit {
    _HKFactorization *_baseUnits;
    _HKDimension *_dimension;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dimensionLock;
}

+ (BOOL)supportsSecureCoding;
+ (id)unitWithBaseUnits:(id)a0;

- (id)dimension;
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)a0 withCycleSet:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_baseUnits;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithBaseUnits:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)unitString;
- (unsigned long long)hash;

@end
