@class NSArray, INCallRecordFilter, INCallRecord, NSString;

@interface INStartCallIntent : INIntent <INStartCallIntentExport>

@property (nonatomic) long long recordTypeForRedialing;
@property (readonly, nonatomic) long long recordTypeForRedialing;
@property (readonly, copy, nonatomic) INCallRecordFilter *callRecordFilter;
@property (readonly, copy, nonatomic) INCallRecord *callRecordToCallBack;
@property (readonly, nonatomic) long long audioRoute;
@property (readonly, nonatomic) long long destinationType;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) long long callCapability;
@property (nonatomic) long long preferredCallProvider;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)initWithAudioRoute:(long long)a0 destinationType:(long long)a1 preferredCallProvider:(long long)a2 contacts:(id)a3 recordTypeForRedialing:(long long)a4 ttyType:(long long)a5 callCapability:(long long)a6;
- (void)setContacts:(id)a0;
- (BOOL)_isGroupFaceTime;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)initWithCallRecordFilter:(id)a0 callRecordToCallBack:(id)a1 audioRoute:(long long)a2 destinationType:(long long)a3 preferredCallProvider:(long long)a4 contacts:(id)a5 ttyType:(long long)a6 callCapability:(long long)a7;
- (void)setCallRecordFilter:(id)a0;
- (void)setCallRecordToCallBack:(id)a0;
- (id)initWithCallRecordFilter:(id)a0 callRecordToCallBack:(id)a1 audioRoute:(long long)a2 destinationType:(long long)a3 contacts:(id)a4 callCapability:(long long)a5;
- (void)setAudioRoute:(long long)a0;
- (void)setDestinationType:(long long)a0;
- (id)domain;
- (id)_emptyCopy;
- (void)setCallCapability:(long long)a0;
- (void)setVerb:(id)a0;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_subtitleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)initWithDestinationType:(long long)a0 contacts:(id)a1 callCapability:(long long)a2;
- (id)initWithAudioRoute:(long long)a0 destinationType:(long long)a1 contacts:(id)a2 callCapability:(long long)a3;
- (id)_spotlightContentType;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)initWithAudioRoute:(long long)a0 destinationType:(long long)a1 contacts:(id)a2 recordTypeForRedialing:(long long)a3 callCapability:(long long)a4;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (id)_currentParameterCombination;
- (id)_dictionaryRepresentation;

@end
