@class HMService, NSString, NSArray;

@interface WFHomeCharacteristicPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) HMService *service;
@property (copy, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) NSArray *possibleStates;

- (void).cxx_destruct;
- (BOOL)isHidden;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)setService:(id)a0 homeIdentifier:(id)a1;
- (void)updatePossibleStates;

@end
