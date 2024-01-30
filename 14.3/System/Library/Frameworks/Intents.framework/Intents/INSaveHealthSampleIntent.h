@class NSArray, NSString, HKUnit, INDateComponentsRange;

@interface INSaveHealthSampleIntent : INIntent <INSaveHealthSampleIntentExport>

@property (readonly, copy, nonatomic) INDateComponentsRange *recordDate;
@property (readonly, nonatomic) long long objectType;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy, nonatomic) HKUnit *unit;
@property (readonly, copy, nonatomic) NSArray *sampleMetadatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setValues:(id)a0;
- (id)verb;
- (void)setUnit:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setSampleMetadatas:(id)a0;
- (id)initWithRecordDate:(id)a0 objectType:(long long)a1 values:(id)a2 unit:(id)a3 sampleMetadatas:(id)a4;
- (id)domain;
- (void)setVerb:(id)a0;
- (void)setObjectType:(long long)a0;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setRecordDate:(id)a0;

@end
