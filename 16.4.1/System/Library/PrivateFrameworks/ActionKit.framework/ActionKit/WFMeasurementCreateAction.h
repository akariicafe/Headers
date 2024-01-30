@interface WFMeasurementCreateAction : WFAction

- (id)currentValue;
- (id)currentUnit;
- (void)initializeParameters;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)currentUnitTypeState;
- (id)unitParameter;

@end
