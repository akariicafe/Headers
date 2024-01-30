@class NSString, NSArray, WFAction;

@interface WFMakeImageFromPDFPageColorspaceParameter : WFEnumerationParameter <WFActionEventObserver> {
    NSArray *_possibleStates;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)possibleStates;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (id)defaultSerializedRepresentation;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;

@end
