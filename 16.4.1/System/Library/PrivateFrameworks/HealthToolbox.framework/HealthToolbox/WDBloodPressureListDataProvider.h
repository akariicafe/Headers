@class NSArray;

@interface WDBloodPressureListDataProvider : WDSampleListDataProvider {
    NSArray *_systolicAndDiastolicTypes;
}

- (id)sampleTypes;
- (void).cxx_destruct;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)textForObject:(id)a0;
- (id)predicateForType:(id)a0;

@end
