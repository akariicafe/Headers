@class NSArray, INAlarmSearch, NSString;

@interface INDeleteAlarmIntent : INIntent <INDeleteAlarmIntentExport>

@property (readonly, copy, nonatomic) INAlarmSearch *alarmSearch;
@property (readonly, copy, nonatomic) NSArray *alarms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAlarms:(id)a0;
- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)domain;
- (void)setAlarmSearch:(id)a0;
- (id)initWithAlarmSearch:(id)a0 alarms:(id)a1;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
