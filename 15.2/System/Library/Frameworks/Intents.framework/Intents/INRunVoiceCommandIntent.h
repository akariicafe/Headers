@class INVoiceCommandDeviceInformation, NSString, INSpeakableString, INIntentExecutionResult;

@interface INRunVoiceCommandIntent : INIntent <INEnumerable, INRunVoiceCommandIntentExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) INSpeakableString *voiceCommand;
@property (readonly, copy, nonatomic) INVoiceCommandDeviceInformation *originDevice;
@property (readonly, copy, nonatomic) INIntentExecutionResult *executionResult;
@property (readonly, copy, nonatomic) NSString *previousIntentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setExecutionResult:(id)a0;
- (void)setOriginDevice:(id)a0;
- (void)setPreviousIntentIdentifier:(id)a0;
- (void)setVoiceCommand:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;
- (id)initWithVoiceCommand:(id)a0 originDevice:(id)a1 executionResult:(id)a2 previousIntentIdentifier:(id)a3;
- (id)initWithVoiceCommand:(id)a0 originDevice:(id)a1;
- (id)initWithVoiceCommand:(id)a0 originDevice:(id)a1 executionResult:(id)a2;

@end
