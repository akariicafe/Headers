@class NSString, NSArray, CLPlacemark, INDateComponentsRange;

@interface INCreateEventIntent : INIntent <INCreateEventIntentExport>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly, copy, nonatomic) CLPlacemark *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (void)setParticipants:(id)a0;
- (void)setTitle:(id)a0;
- (void)setLocation:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithTitle:(id)a0 dateTimeRange:(id)a1 participants:(id)a2 location:(id)a3;
- (id)parametersByName;
- (void)setDateTimeRange:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
