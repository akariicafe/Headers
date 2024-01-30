@class NSArray, INIntentSlotDescription;

@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) INIntentSlotDescription *slotDescription;

- (id)possibleStates;
- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (BOOL)alwaysShowsButton;
- (Class)singleStateClass;

@end
