@class HKQuantityType, NSArray, NSObject;
@protocol OS_dispatch_group;

@interface WFQuantityUnitPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *possibleStateLoadingGroup;
@property (retain, nonatomic) HKQuantityType *quantityType;

- (id)possibleStates;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)updatePossibleStates;

@end
