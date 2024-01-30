@class NSString, NSArray, HKMedicalDateInterval, HKCodedQuantity, HKRatioValue, HKMedicalDate, NSDateComponents, HKCodedValueCollection, HKConcept, HKUCUMUnitDisplayConverter;
@protocol NSSecureCoding, NSObject;

@interface HKInspectableValue : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {
    id<NSObject, NSSecureCoding> _value;
    HKConcept *_concept;
    HKConcept *_dataAbsentReason;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKUCUMUnitDisplayConverter *converter;
@property (readonly, nonatomic) id<NSObject, NSSecureCoding> value;
@property (readonly, nonatomic) long long valueType;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) HKCodedQuantity *codedQuantityValue;
@property (readonly, copy, nonatomic) HKRatioValue *ratioValue;
@property (readonly, copy, nonatomic) HKMedicalDate *medicalDateValue;
@property (readonly, copy, nonatomic) HKMedicalDateInterval *medicalDateIntervalValue;
@property (readonly, copy, nonatomic) NSDateComponents *dateComponentsValue;
@property (readonly, copy, nonatomic) NSArray *medicalCodings;
@property (readonly, copy, nonatomic) HKCodedValueCollection *codedValueCollection;
@property (readonly, copy, nonatomic) NSArray *dataAbsentReasonCodings;
@property (readonly, copy, nonatomic) HKConcept *concept;
@property (readonly, copy, nonatomic) HKConcept *dataAbsentReason;
@property (readonly, nonatomic) NSString *unitString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inspectableValueWithNull;
+ (id)inspectableValueWithValueType:(long long)a0 value:(id)a1;
+ (id)inspectableValueWithString:(id)a0;
+ (id)inspectableValueWithRatio:(id)a0;
+ (id)inspectableValueWithMedicalDate:(id)a0;
+ (id)inspectableValueWithMedicalDateInterval:(id)a0;
+ (id)inspectableValueWithDateComponents:(id)a0;
+ (id)inspectableValueWithMedicalCodings:(id)a0;
+ (id)inspectableValueWithCodedValueCollection:(id)a0;
+ (id)inspectableValueWithDataAbsentReasonCodings:(id)a0;
+ (id)indexableKeyPathsWithPrefix:(id)a0;
+ (id)inspectableValueWithCodedQuantity:(id)a0;

- (id)init;
- (id)_initWithValueType:(long long)a0 value:(id)a1;
- (void)_assertValueType;
- (id)_unitStringForCodedValueCollection:(id)a0;
- (void)_assertValueClass:(Class)a0;
- (void)_setDataAbsentReason:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setConcept:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
