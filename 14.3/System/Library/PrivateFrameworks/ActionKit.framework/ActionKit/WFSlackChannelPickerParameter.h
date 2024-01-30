@class NSString, NSArray, WFAction;

@interface WFSlackChannelPickerParameter : WFEnumerationParameter <WFActionEventObserver>

@property (readonly, nonatomic) NSString *accountParameterKey;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)account;
- (BOOL)isHidden;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)updateSlackChannels;
- (id)identifierForChannelWithName:(id)a0;

@end
