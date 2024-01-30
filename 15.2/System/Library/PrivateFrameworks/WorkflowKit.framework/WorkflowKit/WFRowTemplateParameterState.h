@class NSUUID, WFVariableStringParameterState, NSArray, NSString, WFBooleanSubstitutableState, WFNumberStringSubstitutableState, WFContentProperty, WFByteCountUnitSubstitutableState, WFCalendarUnitSubstitutableState, WFVariableSubstitutableParameterState, WFDateSubstitutableState;

@interface WFRowTemplateParameterState : NSObject <WFParameterState> {
    NSString *_propertyName;
}

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic) WFContentProperty *contentProperty;
@property (readonly, copy, nonatomic) NSArray *contentProperties;
@property (readonly, copy, nonatomic) NSArray *filterableProperties;
@property (readonly, nonatomic) BOOL variablesDisabled;
@property (readonly, nonatomic) long long comparisonOperator;
@property (readonly, nonatomic) BOOL removable;
@property (readonly, nonatomic) BOOL bounded;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) WFVariableSubstitutableParameterState *enumerationValue;
@property (readonly, nonatomic) WFVariableStringParameterState *stringValue;
@property (readonly, nonatomic) WFBooleanSubstitutableState *booleanValue;
@property (readonly, nonatomic) WFNumberStringSubstitutableState *numberValue;
@property (readonly, nonatomic) WFVariableStringParameterState *phoneValue;
@property (readonly, nonatomic) WFVariableStringParameterState *emailValue;
@property (readonly, nonatomic) WFCalendarUnitSubstitutableState *calendarUnitValue;
@property (readonly, nonatomic) WFByteCountUnitSubstitutableState *byteCountUnitValue;
@property (readonly, nonatomic) WFDateSubstitutableState *dateValue;
@property (readonly, nonatomic) WFDateSubstitutableState *anotherDateValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithPropertyName:(id)a0 contentItemClass:(Class)a1 comparisonOperator:(long long)a2 removable:(BOOL)a3 bounded:(BOOL)a4 hidden:(BOOL)a5;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2 contentItemClass:(Class)a3 variablesDisabled:(BOOL)a4;
- (BOOL)isValueWithInfoDisplayed:(const struct WFRowTemplateValueInfo { Class x0; SEL x1; SEL x2; id x3; id x4; } *)a0;
- (id)defaultStateForInfo:(const struct WFRowTemplateValueInfo { Class x0; SEL x1; SEL x2; id x3; id x4; } *)a0;
- (void)getUserInputRequiredValue:(id /* block */)a0 context:(id)a1;
- (id)actualCopyWithZone:(struct _NSZone { } *)a0 propertyName:(id)a1;
- (id)actualCopyWithZone:(struct _NSZone { } *)a0;
- (id)stateBySettingContentProperty:(id)a0;
- (id)stateBySettingComparisonOperator:(long long)a0;
- (id)stateBySettingVariablesDisabled:(BOOL)a0;
- (id)stateBySettingEnumerationValue:(id)a0;
- (id)stateBySettingStringValue:(id)a0;
- (id)stateBySettingBooleanValue:(id)a0;
- (id)stateBySettingNumberValue:(id)a0;
- (id)stateBySettingPhoneValue:(id)a0;
- (id)stateBySettingEmailValue:(id)a0;
- (id)stateBySettingCalendarUnitValue:(id)a0;
- (id)stateBySettingByteCountUnitValue:(id)a0;
- (id)stateBySettingDateValue:(id)a0;
- (id)stateBySettingAnotherDateValue:(id)a0;

@end
