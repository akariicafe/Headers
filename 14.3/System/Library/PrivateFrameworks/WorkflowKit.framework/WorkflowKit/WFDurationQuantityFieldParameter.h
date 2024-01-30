@interface WFDurationQuantityFieldParameter : WFQuantityFieldParameter

@property (nonatomic) unsigned long long possibleCalendarUnits;

+ (unsigned long long)calendarUnitFromUnitString:(id)a0;
+ (BOOL)unitStringIsDurationUnit:(id)a0;

- (id)initWithDefinition:(id)a0;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (id)stateForDuration:(double)a0;

@end
