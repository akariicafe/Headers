@class NSArray, NSString, HKUnit, HKQuantitySample;

@interface WFHKQuantitySampleContainer : NSObject <NSSecureCoding, WFNaming, WFStatisticsSampleProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HKQuantitySample *quantitySample;
@property (retain, nonatomic) NSArray *subcontainers;
@property (retain, nonatomic) NSArray *subsamples;
@property (retain, nonatomic) HKUnit *unit;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) BOOL hasSubsamples;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) BOOL canProvideDataSamples;
@property (readonly, nonatomic) NSArray *dataSamples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)normalizedValue;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateValue:(id)a0 fromStatisticsOperation:(long long)a1;
- (id)initWithSample:(id)a0 unit:(id)a1;
- (id)initWithSubsamples:(id)a0 unit:(id)a1;

@end
