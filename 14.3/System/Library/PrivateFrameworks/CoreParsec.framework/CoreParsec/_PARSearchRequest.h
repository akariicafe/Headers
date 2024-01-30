@class _PARLocation, NSString, NSArray, NSData, _PARSilhouette, _PARSubscriptions, _PARMapsSession;

@interface _PARSearchRequest : PBCodable <_PARSearchRequest, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int queryType;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *secretKey;
@property (nonatomic) int sendTopHit;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *effectiveSystemLanguage;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (copy, nonatomic) NSString *inputMode;
@property (copy, nonatomic) NSString *calendar;
@property (copy, nonatomic) NSString *timeZone;
@property (nonatomic) int tempUnit;
@property (nonatomic) int measurementSystem;
@property (nonatomic) int hourFormat;
@property (copy, nonatomic) NSString *modelVersionL2;
@property (copy, nonatomic) NSString *modelVersionL3;
@property (copy, nonatomic) NSArray *localSuggestions;
@property (copy, nonatomic) NSData *dictionarySignature;
@property (retain, nonatomic) _PARSilhouette *silhouette;
@property (retain, nonatomic) _PARLocation *location;
@property (nonatomic) int routineMode;
@property (nonatomic) int transportationMode;
@property (copy, nonatomic) NSData *installedAppsSignature;
@property (nonatomic) BOOL managedDevice;
@property (copy, nonatomic) NSString *storeFront;
@property (retain, nonatomic) _PARSubscriptions *subscriptions;
@property (copy, nonatomic) NSString *userGUID;
@property (nonatomic) float uiScale;
@property (retain, nonatomic) _PARMapsSession *mapsSession;
@property (nonatomic) int suggest;
@property (copy, nonatomic) NSString *queryLanguage;
@property (copy, nonatomic) NSString *lookupAppBundleId;
@property (copy, nonatomic) NSString *lookupHintDomain;
@property (nonatomic) int lookupSelectionType;
@property (copy, nonatomic) NSString *siriLocale;
@property (nonatomic) BOOL hsEnabled;
@property (nonatomic) BOOL internalBuild;
@property (nonatomic) BOOL seedBuild;
@property (nonatomic) int abTestSeed;
@property (copy, nonatomic) NSString *experimentNamespaceId;
@property (nonatomic) BOOL isClientOnlyExperiment;
@property (nonatomic) BOOL isInReservedAllocationForExperiment;
@property (nonatomic) long long exp;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addPreferredLanguages:(id)a0;
- (void)clearPreferredLanguages;
- (unsigned long long)preferredLanguagesCount;
- (id)preferredLanguagesAtIndex:(unsigned long long)a0;
- (void)addLocalSuggestions:(id)a0;
- (void)clearLocalSuggestions;
- (unsigned long long)localSuggestionsCount;
- (id)localSuggestionsAtIndex:(unsigned long long)a0;

@end
