@interface WFMeasurementConvertAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)initializeParameters;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)a0;
- (id)unitParameter;
- (id)currentUnitType;
- (id)unitWithSymbol:(id)a0;

@end
