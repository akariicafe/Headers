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

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (id)initWithIncidentType:(id)a0 startTime:(id)a1 additionalDetails:(id)a2 isClear:(id)a3;
- (void)setVerb:(id)a0;
- (void)setIsClear:(id)a0;
- (id)initWithIncidentType:(id)a0 startTime:(id)a1 isClear:(id)a2 userLocation:(id)a3 additionalDetails:(id)a4;
- (void)setUserLocation:(id)a0;
- (void)setAdditionalDetails:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setStartTime:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;

@end
