@class INSpeakableString, NSArray, NSString;

@interface INCreateTaskListIntent : INIntent <INCreateTaskListIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *title;
@property (readonly, copy, nonatomic) NSArray *taskTitles;
@property (readonly, copy, nonatomic) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setGroupName:(id)a0;
- (id)domain;
- (void)setTaskTitles:(id)a0;
- (id)initWithTitle:(id)a0 taskTitles:(id)a1 groupName:(id)a2;
- (void)setTitle:(id)a0;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
