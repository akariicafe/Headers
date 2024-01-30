@class HKQuantity, NSArray, NSString, NSNumber;

@interface HKElectrocardiogram : HKSample <_HKBinarySample> {
    struct Electrocardiogram { void /* function */ **_vptr$Base; double _frequency; struct PtrVector<binarysample::ElectrocardiogramLead> { struct vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *__begin_; void *__end_; struct __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *__value_; } __end_cap_; } _v; } _leads; struct { unsigned char frequency : 1; } _has; } _reading;
    unsigned long long _privateClassification;
    HKQuantity *_averageHeartRate;
}

@property (readonly, nonatomic, getter=_algorithmVersion) NSNumber *algorithmVersion;
@property (readonly, nonatomic) unsigned long long privateClassification;
@property (readonly, nonatomic, getter=privateSymptoms) unsigned long long privateSymptoms;
@property (readonly, copy, nonatomic) NSArray *leadNames;
@property (readonly, nonatomic, getter=_localizedSymptoms) NSArray *localizedSymptoms;
@property (readonly, nonatomic) long long numberOfVoltageMeasurements;
@property (readonly, copy, nonatomic) HKQuantity *samplingFrequency;
@property (readonly, nonatomic) long long classification;
@property (readonly, copy, nonatomic) HKQuantity *averageHeartRate;
@property (readonly, nonatomic) long long symptomsStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_electrocardiogramWithStartDate:(id)a0 device:(id)a1 metadata:(id)a2;
+ (BOOL)supportsEquivalence;
+ (BOOL)_isConcreteObjectClass;
+ (id)_localizedClassification:(unsigned long long)a0 withActiveAlgorithmVersion:(long long)a1;

- (id)payload;
- (void)setReading:(struct Electrocardiogram { void /* function */ **x0; double x1; struct PtrVector<binarysample::ElectrocardiogramLead> { struct vector<std::unique_ptr<binarysample::ElectrocardiogramLead>, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *x0; void *x1; struct __compressed_pair<std::unique_ptr<binarysample::ElectrocardiogramLead> *, std::allocator<std::unique_ptr<binarysample::ElectrocardiogramLead>>> { void *x0; } x2; } x0; } x2; struct { unsigned char x0 : 1; } x3; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setPrivateClassification:(unsigned long long)a0;
- (void)_setAverageHeartRate:(id)a0;
- (BOOL)prepareForSaving:(id *)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)_setPayload:(id)a0;
- (long long)symptoms;
- (void).cxx_destruct;
- (unsigned long long)_classification;
- (id)initWithCoder:(id)a0;
- (void)_enumerateDataForLead:(long long)a0 block:(id /* block */)a1;
- (unsigned long long)_symptoms;
- (void)_setSymptomsStatus:(long long)a0;
- (void)enumerateDataForLead:(long long)a0 block:(id /* block */)a1;
- (id)_localizedClassificationWithActiveAlgorithmVersion:(long long)a0;
- (long long)numberOfValues;
- (id).cxx_construct;
- (id)frequency;

@end
