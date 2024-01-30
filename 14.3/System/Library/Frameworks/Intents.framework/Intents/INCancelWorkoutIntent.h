@class INSpeakableString, NSString;

@interface INCancelWorkoutIntent : INIntent <INCancelWorkoutIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *workoutName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)domain;
- (id)localizeValueOfSlotDescription:(id)a0 withLocalizer:(id)a1;
- (void)setVerb:(id)a0;
- (void)setWorkoutName:(id)a0;
- (id)initWithWorkoutName:(id)a0;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
