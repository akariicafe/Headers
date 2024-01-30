@class NSArray, INAlarmSearch, NSString;

@interface INSearchAlarmIntent : INIntent <INSearchAlarmIntentExport>

@property (readonly, copy, nonatomic) INAlarmSearch *alarmSearch;
@property (readonly, nonatomic) long long alarmSearchType;
@property (readonly, copy, nonatomic) NSArray *alarms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setAlarmSearch:(id)a0;
- (void)setVerb:(id)a0;
- (void)setAlarmSearchType:(long long)a0;
- (id)initWithAlarmSearch:(id)a0 alarmSearchType:(long long)a1 alarms:(id)a2;
- (void)setAlarms:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;

@end
