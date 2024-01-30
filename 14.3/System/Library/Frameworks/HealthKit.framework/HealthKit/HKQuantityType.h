@class HKUnit, _HKDimension;

@interface HKQuantityType : HKSampleType {
    HKUnit *_canonicalUnit;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _canonicalUnitLock;
}

@property (readonly, nonatomic) _HKDimension *dimension;
@property (readonly, nonatomic) HKUnit *canonicalUnit;
@property (readonly) long long aggregationStyle;

+ (id)_quantityTypeWithCode:(long long)a0;

- (void)validateUnitFromString:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCode:(long long)a0;
- (void)validateUnit:(id)a0;
- (BOOL)_validateMetadata:(id)a0 sample:(id)a1 error:(id *)a2;
- (BOOL)isCompatibleWithUnit:(id)a0;

@end
