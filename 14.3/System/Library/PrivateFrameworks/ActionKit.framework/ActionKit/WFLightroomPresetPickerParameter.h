@class NSArray, NSString, WFAction;

@interface WFLightroomPresetPickerParameter : WFEnumerationParameter <WFActionEventObserver>

@property (readonly, nonatomic) NSArray *possibleStates;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presetsByGroup;

- (void).cxx_destruct;
- (BOOL)isHidden;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;

@end
