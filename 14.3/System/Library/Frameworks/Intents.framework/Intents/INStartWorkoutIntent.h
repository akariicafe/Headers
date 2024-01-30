@class NSArray, NSString, INSpeakableString, NSNumber;

@interface INStartWorkoutIntent : INIntent <INStartWorkoutIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *workoutName;
@property (readonly, copy, nonatomic) NSNumber *goalValue;
@property (readonly, nonatomic) long long workoutGoalUnitType;
@property (readonly, nonatomic) long long workoutLocationType;
@property (readonly, copy, nonatomic) NSNumber *isOpenEnded;
@property (copy, nonatomic) NSArray *associatedItems;
@property (copy, nonatomic) NSNumber *isBuiltInWorkoutType;
@property (copy, nonatomic) NSNumber *isVoiceOnly;
@property (nonatomic) long long sequenceLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)initWithWorkoutName:(id)a0 goalValue:(id)a1 workoutGoalUnitType:(long long)a2 workoutLocationType:(long long)a3 isOpenEnded:(id)a4;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)domain;
- (void)setGoalValue:(id)a0;
- (id)localizeValueOfSlotDescription:(id)a0 withLocalizer:(id)a1;
- (void)setIsOpenEnded:(id)a0;
- (void)setWorkoutGoalUnitType:(long long)a0;
- (void)setWorkoutLocationType:(long long)a0;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)a0 context:(unsigned long long)a1 error:(id *)a2;
- (void)setVerb:(id)a0;
- (void)setWorkoutName:(id)a0;
- (id)_goalValueIntentSlotDescription;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
