@interface HKSeriesSample : HKSample {
    _Atomic unsigned int _count;
}

@property (nonatomic, getter=_isFrozen, setter=_setFrozen:) BOOL frozen;
@property (readonly) unsigned long long count;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setCount:(unsigned long long)a0;
- (id)_validateSample;
- (id)_valueDescription;
- (BOOL)_shouldNotifyOnInsert;
- (void)encodeWithCoder:(id)a0;

@end
