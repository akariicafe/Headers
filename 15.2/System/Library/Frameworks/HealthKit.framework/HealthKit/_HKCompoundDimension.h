@class _HKFactorization;

@interface _HKCompoundDimension : _HKDimension {
    _HKFactorization *_baseDimensions;
}

+ (id)dimensionWithBaseDimensions:(id)a0;

- (id)_initWithBaseDimensions:(id)a0;
- (void).cxx_destruct;
- (id)_baseDimensions;

@end
