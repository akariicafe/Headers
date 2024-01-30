@interface WFContentItemPropertiesAction : WFContentItemAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (id)keywords;
- (id)properties;
- (id)name;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)localizedDefaultOutputName;
- (BOOL)inputRequired;
- (id)parameterSummary;
- (id)descriptionSummary;
- (id)localizedDescriptionResult;
- (id)inputParameterKey;
- (id)selectedProperty;
- (id)parameterDefinitions;
- (void)finishWithItems:(id)a0 property:(id)a1 coercionPerformed:(BOOL)a2;

@end
