@class NSArray;

@interface WDBloodPressureListDataProvider : WDSampleListDataProvider {
    NSArray *_systolicAndDiastolicTypes;
}

- (id)sampleTypes;
- (void).cxx_destruct;
- (id)predicateForType:(id)a0;
- (id)textForObject:(id)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;

@end
