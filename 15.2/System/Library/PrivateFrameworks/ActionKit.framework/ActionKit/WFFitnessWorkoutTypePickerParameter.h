@class NSString, NSArray, WFAction;

@interface WFFitnessWorkoutTypePickerParameter : WFEnumerationParameter <WFActionEventObserver> {
    int _characteristicUpdateToken;
    NSArray *_possibleStates;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)possibleStates;
- (void).cxx_destruct;
- (id)localizedPlaceholder;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)defaultSerializedRepresentationDidChange;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)a0;
- (void)saveStateIfNeeded;

@end
