@class NSArray, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>

@property (readonly, nonatomic) BOOL useSpeaker;
@property (readonly, nonatomic) long long destinationType;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (nonatomic) long long audioRoute;
@property (nonatomic) long long preferredCallProvider;
@property (nonatomic) long long recordTypeForRedialing;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (void)setContacts:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)initWithContacts:(id)a0;
- (void)setDestinationType:(long long)a0;
- (id)domain;
- (void)setUseSpeaker:(BOOL)a0;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (void)setVerb:(id)a0;
- (id)_subtitleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_spotlightContentType;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)initWithDestinationType:(long long)a0 contacts:(id)a1;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (id)_currentParameterCombination;
- (id)_dictionaryRepresentation;

@end
