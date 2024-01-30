@class INTimer, NSNumber, NSString;

@interface INResumeTimerIntent : INIntent <INResumeTimerIntentExport>

@property (readonly, copy, nonatomic) INTimer *targetTimer;
@property (readonly, copy, nonatomic) NSNumber *resumeMultiple;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)initWithTargetTimer:(id)a0 resumeMultiple:(id)a1;
- (id)domain;
- (void)setVerb:(id)a0;
- (void)setTargetTimer:(id)a0;
- (void)setResumeMultiple:(id)a0;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
