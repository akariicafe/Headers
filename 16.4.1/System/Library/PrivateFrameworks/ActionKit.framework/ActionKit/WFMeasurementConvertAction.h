@interface WFMeasurementConvertAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)initializeParameters;
- (id)outputMeasurementUnitType;
- (id)parametersRequiringUserInputAlongsideParameter:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)unitWithSymbol:(id)a0;
- (id)currentUnitType;
- (id)unitParameter;

@end
