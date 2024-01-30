@class INSpeakableString, NSString;

@interface INEndWorkoutIntent : INIntent <INEndWorkoutIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *workoutName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (id)localizeValueOfSlotDescription:(id)a0 withLocalizer:(id)a1;
- (void)setWorkoutName:(id)a0;
- (id)initWithWorkoutName:(id)a0;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (void)setDomain:(id)a0;

@end
