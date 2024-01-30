@class NSArray, NSString, NSNumber, INDateComponentsRange;

@interface INSnoozeTasksIntent : INIntent <INSnoozeTasksIntentExport>

@property (readonly, copy, nonatomic) NSArray *tasks;
@property (readonly, copy, nonatomic) INDateComponentsRange *nextTriggerTime;
@property (readonly, copy, nonatomic) NSNumber *all;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setAll:(id)a0;
- (void)setNextTriggerTime:(id)a0;
- (id)initWithTasks:(id)a0 nextTriggerTime:(id)a1 all:(id)a2;
- (id)domain;
- (void)setVerb:(id)a0;
- (void)setTasks:(id)a0;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
