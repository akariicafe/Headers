@class INTimer, NSNumber, NSString;

@interface INPauseTimerIntent : INIntent <INPauseTimerIntentExport>

@property (readonly, copy, nonatomic) INTimer *targetTimer;
@property (readonly, copy, nonatomic) NSNumber *pauseMultiple;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setPauseMultiple:(id)a0;
- (void)setTargetTimer:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (id)initWithTargetTimer:(id)a0 pauseMultiple:(id)a1;
- (void)setDomain:(id)a0;

@end
