@class NSString, WFAction;

@interface WFMeasurementUnitPickerParameter : WFEnumerationParameter <WFActionEventObserver>

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)possibleStates;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)currentUnitType;

@end
