@class NSString, CLPlacemark, NSNumber, INSupportedTrafficIncidentType;

@interface INReportIncidentIntent : INIntent <INReportIncidentIntentExport>

@property (copy, nonatomic) NSString *incidentType;
@property (readonly, copy, nonatomic) INSupportedTrafficIncidentType *incidentType;
@property (readonly, copy, nonatomic) NSNumber *startTime;
@property (readonly, copy, nonatomic) NSNumber *isClear;
@property (readonly, copy, nonatomic) CLPlacemark *userLocation;
@property (readonly, copy, nonatomic) NSString *additionalDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (void)setStartTime:(id)a0;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (void)setAdditionalDetails:(id)a0;
- (void)setUserLocation:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithIncidentType:(id)a0 startTime:(id)a1 additionalDetails:(id)a2 isClear:(id)a3;
- (id)initWithIncidentType:(id)a0 startTime:(id)a1 isClear:(id)a2 userLocation:(id)a3 additionalDetails:(id)a4;
- (id)parametersByName;
- (void)setIsClear:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
