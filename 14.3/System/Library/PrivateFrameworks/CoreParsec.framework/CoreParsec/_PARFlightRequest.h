@class _PARLocation, NSString, NSArray, NSData, _PARMapsSession;

@interface _PARFlightRequest : PBCodable <_PARFlightRequest, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *query;
@property (nonatomic) unsigned long long date;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *effectiveSystemLanguage;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (copy, nonatomic) NSString *inputMode;
@property (retain, nonatomic) _PARLocation *location;
@property (copy, nonatomic) NSData *installedAppsSignature;
@property (nonatomic) int routineMode;
@property (nonatomic) int transportationMode;
@property (copy, nonatomic) NSString *userGUID;
@property (nonatomic) float uiScale;
@property (retain, nonatomic) _PARMapsSession *mapsSession;
@property (copy, nonatomic) NSString *flightBundleId;
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

@end
