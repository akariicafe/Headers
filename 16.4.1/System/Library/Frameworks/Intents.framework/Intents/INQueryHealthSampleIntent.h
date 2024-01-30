@class NSArray, HKUnit, NSString;

@interface INQueryHealthSampleIntent : INIntent <INQueryHealthSampleIntentExport>

@property (readonly, nonatomic) long long objectType;
@property (readonly, copy, nonatomic) NSArray *recordDates;
@property (readonly, copy, nonatomic) HKUnit *unit;
@property (readonly, nonatomic) long long questionType;
@property (readonly, copy, nonatomic) NSArray *thresholdValues;
@property (readonly, nonatomic) long long expectedResultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (void)setUnit:(id)a0;
- (id)_metadata;
- (void)setRecordDates:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithObjectType:(long long)a0 recordDates:(id)a1 unit:(id)a2 questionType:(long long)a3 thresholdValues:(id)a4 expectedResultType:(long long)a5;
- (id)parametersByName;
- (void)setExpectedResultType:(long long)a0;
- (void)setObjectType:(long long)a0;
- (void)setParametersByName:(id)a0;
- (void)setQuestionType:(long long)a0;
- (void)setThresholdValues:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
