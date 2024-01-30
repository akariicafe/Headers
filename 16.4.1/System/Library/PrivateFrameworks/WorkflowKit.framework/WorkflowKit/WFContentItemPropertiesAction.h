@interface WFContentItemPropertiesAction : WFContentItemAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (id)keywords;
- (id)properties;
- (id)name;
- (id)parameterDefinitions;
- (id)contentDestinationWithError:(id *)a0;
- (id)descriptionSummary;
- (void)finishWithItems:(id)a0 property:(id)a1 coercionPerformed:(BOOL)a2;
- (id)inputParameterKey;
- (BOOL)inputRequired;
- (id)localizedDefaultOutputName;
- (id)localizedDescriptionResult;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)parameterSummary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)selectedProperty;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;

@end
