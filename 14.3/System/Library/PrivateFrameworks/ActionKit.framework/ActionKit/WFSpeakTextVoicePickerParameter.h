@class NSString, WFAction;

@interface WFSpeakTextVoicePickerParameter : WFEnumerationParameter <WFActionEventObserver>

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultVoiceForLanguageCode:(id)a0;

- (id)possibleStates;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)selectedLanguageCode;
- (id)sortedVoicesForLanguageCode:(id)a0;
- (id)voiceForIdentifier:(id)a0 languageCode:(id)a1;

@end
