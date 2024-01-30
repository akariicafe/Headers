@class NSArray;

@interface WDBloodPressureListDataProvider : WDSampleListDataProvider {
    NSArray *_systolicAndDiastolicTypes;
}

- (void).cxx_destruct;
- (id)sampleTypes;
- (id)predicateForType:(id)a0;
- (id)textForObject:(id)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;

@end
