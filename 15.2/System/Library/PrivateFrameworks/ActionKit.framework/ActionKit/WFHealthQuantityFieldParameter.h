@class NSString, WFAction, NSArray, HKQuantityType;

@interface WFHealthQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver> {
    NSArray *_possibleUnits;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localizedLabel;
- (void).cxx_destruct;
- (id)localizedPrompt;
- (BOOL)isHidden;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)attributesDidChange;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)possibleUnits;
- (void)setPossibleUnits:(id)a0;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (void)updatePossibleUnits;

@end
