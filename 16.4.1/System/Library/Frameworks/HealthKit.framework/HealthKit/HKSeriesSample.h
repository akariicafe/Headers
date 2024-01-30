@interface HKSeriesSample : HKSample {
    _Atomic unsigned int _count;
}

@property (nonatomic, getter=_isFrozen, setter=_setFrozen:) BOOL frozen;
@property (readonly) unsigned long long count;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (id)_validateSample;
- (void)_setCount:(unsigned long long)a0;
- (BOOL)_shouldNotifyOnInsert;
- (id)_valueDescription;

@end
