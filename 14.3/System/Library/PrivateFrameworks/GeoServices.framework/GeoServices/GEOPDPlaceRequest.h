@class NSData, NSString, GEOPDPlaceRequestParameters, PBDataReader, PBUnknownFields, GEOPDClientMetadata, GEOPDAnalyticMetadata, NSMutableArray;

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAnalyticMetadata *_analyticMetadata;
    NSMutableArray *_auxiliaryTierRequestedComponents;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    NSData *_handleData;
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    NSMutableArray *_requestedComponents;
    NSMutableArray *_spokenLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _requestType;
    BOOL _needLatency;
    BOOL _suppressResultsRequiringAttribution;
    struct { unsigned char has_requestType : 1; unsigned char has_needLatency : 1; unsigned char has_suppressResultsRequiringAttribution : 1; unsigned char read_unknownFields : 1; unsigned char read_analyticMetadata : 1; unsigned char read_auxiliaryTierRequestedComponents : 1; unsigned char read_clientMetadata : 1; unsigned char read_displayLanguages : 1; unsigned char read_displayRegion : 1; unsigned char read_handleData : 1; unsigned char read_placeRequestParameters : 1; unsigned char read_requestedComponents : 1; unsigned char read_spokenLanguages : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasNeedLatency;
@property (nonatomic) BOOL needLatency;
@property (readonly, nonatomic) BOOL hasHandleData;
@property (retain, nonatomic) NSData *handleData;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *displayLanguages;
@property (retain, nonatomic) NSMutableArray *spokenLanguages;
@property (retain, nonatomic) NSMutableArray *requestedComponents;
@property (nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property (nonatomic) BOOL suppressResultsRequiringAttribution;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) BOOL hasPlaceRequestParameters;
@property (retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (retain, nonatomic) NSString *displayRegion;
@property (retain, nonatomic) NSMutableArray *auxiliaryTierRequestedComponents;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)collectionComponentInfoForReason:(unsigned long long)a0 count:(unsigned int)a1 traits:(id)a2;
+ (id)photoLookupRequestWithVendorIdentifier:(id)a0 mapItemIdentifier:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 traits:(id)a3;
+ (Class)requestedComponentType;
+ (Class)spokenLanguageType;
+ (id)componentInfoWithType:(int)a0 count:(unsigned int)a1 traits:(id)a2;
+ (id)publisherComponentInfoForReason:(unsigned long long)a0 count:(unsigned int)a1 traits:(id)a2;
+ (Class)displayLanguageType;
+ (id)createRequestedComponentsForReason:(unsigned long long)a0 traits:(id)a1 count:(unsigned int)a2;
+ (BOOL)isValid:(id)a0;
+ (Class)auxiliaryTierRequestedComponentType;

- (unsigned long long)displayLanguagesCount;
- (void)clearDisplayLanguages;
- (void)addSpokenLanguage:(id)a0;
- (id)spokenLanguageAtIndex:(unsigned long long)a0;
- (id)displayLanguageAtIndex:(unsigned long long)a0;
- (void)clearSensitiveFields;
- (id)initWithExternalBusinessID:(id)a0 contentProvider:(id)a1 traits:(id)a2;
- (id)initForBrandLookupWithIMessageUid:(id)a0 traits:(id)a1;
- (id)initWithJSON:(id)a0;
- (id)initWithForwardGeocodeAddress:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (Class)responseClass;
- (id)requestedComponentAtIndex:(unsigned long long)a0;
- (id)initWithExternalTransitStationCodes:(id)a0 sourceID:(id)a1 transactionDate:(id)a2 transactionLocation:(id)a3 traits:(id)a4;
- (int)resultProviderID;
- (id)initWithForwardGeocodeAddressString:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)requestTypeAsString:(int)a0;
- (id)initWithAutocompleteFragment:(id)a0 type:(int)a1 traits:(id)a2 filters:(id)a3 retainedSearch:(id)a4 tappedQuerySuggestion:(id)a5 sessionData:(id)a6 error:(id *)a7;
- (id)browseCategorySuggestionparametersWithTraits:(id)a0 isFromNoQueryState:(BOOL)a1;
- (id)initForSpotlightCategoryListWithTraits:(id)a0;
- (id)initWithCanonicalLocationSearchQueryString:(id)a0 traits:(id)a1;
- (id)cacheKey;
- (id)initForSearchFieldPlaceholderWithTraits:(id)a0;
- (id)init;
- (id)initForCuratedCollectionItemLookupWithIdentifiers:(id)a0 collectionIdentifier:(id)a1 traits:(id)a2;
- (id)initWithPlaceRefinementParameters:(id)a0 traits:(id)a1;
- (BOOL)hasResultProviderID;
- (id)initWithBatchReverseGeocodeLocations:(id)a0 additionalPlaceTypes:(int *)a1 additionalPlaceTypesCount:(unsigned long long)a2 traits:(id)a3;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTripIds:(id)a0 traits:(id)a1;
- (void)mergeFrom:(id)a0;
- (id)initWithAllCollectionViewWithBatchSize:(unsigned int)a0 keywordFilter:(id)a1 addressFilter:(id)a2 withTraits:(id)a3;
- (id)initWithCategory:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)initWithReverseGeocodeLocation:(id)a0 includeEntryPoints:(BOOL)a1 preserveOriginalLocation:(BOOL)a2 placeTypeLimit:(int)a3 traits:(id)a4;
- (id)initWithCategory:(id)a0 routeInfo:(id)a1 maxResults:(unsigned int)a2 traits:(id)a3;
- (id)initWithData:(id)a0;
- (int)geoUserPreferredTransportType;
- (int)StringAsRequestType:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)requestedComponentsCount;
- (BOOL)readFrom:(id)a0;
- (id)_initWithTraits:(id)a0 includeHistoricalLocations:(BOOL)a1 supportedMapsResultTypes:(id)a2;
- (unsigned long long)auxiliaryTierRequestedComponentsCount;
- (id)initWithInitialRequestData:(id)a0 traits:(id)a1;
- (void)readAll:(BOOL)a0;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)a0 traits:(id)a1;
- (id)initWithTransitTripDetailsAtStation:(unsigned long long)a0 line:(unsigned long long)a1 referenceTripId:(unsigned long long)a2 routingParameters:(id)a3 traits:(id)a4;
- (id)initWithUpdatedTransitScheduleDetailsAtStation:(unsigned long long)a0 line:(unsigned long long)a1 referenceTripId:(unsigned long long)a2 routingParameters:(id)a3 traits:(id)a4;
- (id)initWithMerchantCode:(id)a0 rawMerchantCode:(id)a1 industryCategory:(id)a2 industryCode:(id)a3 paymentNetwork:(id)a4 transactionDate:(id)a5 transactionLocation:(id)a6 terminalId:(id)a7 transactionCurrencyCode:(id)a8 transactionType:(int)a9 transactionId:(id)a10 warsawMerchantDomain:(id)a11 warsawMerchantName:(id)a12 warsawMerchantId:(id)a13 adamId:(id)a14 merchantId:(id)a15 merchantDoingBizAsName:(id)a16 merchantEnhancedName:(id)a17 merchantCity:(id)a18 merchantRawCity:(id)a19 merchantState:(id)a20 merchantRawState:(id)a21 merchantZip:(id)a22 merchantAddress:(id)a23 merchantRawAddress:(id)a24 merchantCountryCode:(id)a25 merchantType:(id)a26 merchantCleanConfidenceLevel:(id)a27 merchantAdditionalData:(id)a28 merchantCanl:(id)a29 fuzzyMatched:(id)a30 coarseLocationUsed:(id)a31 traits:(id)a32;
- (unsigned long long)hash;
- (id)initForDFRCategoryListWithTraits:(id)a0;
- (id)initForWifiFingerprintLookupWithLocations:(id)a0 wifiAccessPoints:(id)a1 maxLabels:(unsigned int)a2 entryTime:(unsigned long long)a3 exitTime:(unsigned long long)a4 traits:(id)a5;
- (id)pdSpatialEventLookupParametersForParameters:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithPopularNearbySearchCategory:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)initWithCategoryMetadata:(id)a0 parentMuid:(unsigned long long)a1 traits:(id)a2;
- (id)initPublisherViewWithPublisherIdentifier:(id)a0 keywordFilter:(id)a1 addressFilter:(id)a2 batchSize:(unsigned int)a3 withTraits:(id)a4;
- (id)initWithMapItemToRefine:(id)a0 traits:(id)a1;
- (void)addRequestedComponentsForReason:(unsigned long long)a0 traits:(id)a1 count:(unsigned int)a2;
- (id)initForNearestTransitStationWithLine:(id)a0 coordinate:(struct { double x0; double x1; })a1 traits:(id)a2;
- (id)description;
- (BOOL)isPlaceRefinementRequest;
- (id)pdSpatialPlaceLookupParametersForParameters:(id)a0;
- (id)initWithSearchURLQuery:(id)a0 coordinate:(struct { double x0; double x1; })a1 maxResults:(unsigned int)a2 traits:(id)a3;
- (void)clearSpokenLanguages;
- (id)_initWithTransitScheduleRequestForStation:(unsigned long long)a0 line:(unsigned long long)a1 referenceTripId:(unsigned long long)a2 routingParameters:(id)a3 traits:(id)a4;
- (id)initForCuratedCollectionLookupWithIdentifiers:(id)a0 isBatchLookup:(BOOL)a1 traits:(id)a2;
- (void)copyTo:(id)a0;
- (id)initForDatasetCheckWithTraits:(id)a0;
- (id)initWithAirportCode:(id)a0 terminalCode:(id)a1 gateCode:(id)a2 traits:(id)a3;
- (void)addRequestedComponents:(id)a0;
- (id)initForAutocompleteWithTraits:(id)a0 count:(unsigned int)a1;
- (BOOL)isEqual:(id)a0;
- (void)clearRequestedComponents;
- (id)dictionaryRepresentation;
- (id)pdSpatialEventLookupParametersArrayForParameters:(id)a0;
- (id)pdSpatialPlaceLookupParametersArrayForParameters:(id)a0;
- (id)initWithMapItemToRefine:(id)a0 coordinate:(struct { double x0; double x1; })a1 traits:(id)a2;
- (unsigned long long)spokenLanguagesCount;
- (double)localTimestamp;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isMerchantRequest;
- (id)initWithTransitDeparturesAtStation:(unsigned long long)a0 line:(unsigned long long)a1 referenceTripId:(unsigned long long)a2 routingParameters:(id)a3 traits:(id)a4;
- (id)initWithComponents:(id)a0 identifier:(id)a1 resultProviderID:(int)a2 traits:(id)a3;
- (BOOL)isCanonicalLocationSearchRequest;
- (id)initWithReverseGeocodeCoordinate:(struct { double x0; double x1; })a0 includeEntryPoints:(BOOL)a1 preserveOriginalLocation:(BOOL)a2 traits:(id)a3;
- (void)addRequestedComponent:(id)a0;
- (void)addDisplayLanguage:(id)a0;
- (id)initForSearchHomeWithTraits:(id)a0;
- (id)initForCategoryListWithTraits:(id)a0 isFromNoQueryState:(BOOL)a1;
- (id)initWithDictionary:(id)a0;
- (void)addAuxiliaryTierRequestedComponent:(id)a0;
- (int)userPreferredTransportTypeFromTransportType:(int)a0;
- (void)clearAuxiliaryTierRequestedComponents;
- (id)initWithMerchantCode:(id)a0 rawMerchantCode:(id)a1 industryCategory:(id)a2 industryCode:(id)a3 paymentNetwork:(id)a4 transactionDate:(id)a5 transactionLocation:(id)a6 traits:(id)a7;
- (id)initWithIdentifiers:(id)a0 resultProviderID:(int)a1 traits:(id)a2;
- (id)initWithSpatialEventLookupParameters:(id)a0 traits:(id)a1;
- (id)initForGeoIpLookupWithIpAddress:(id)a0 traits:(id)a1;
- (id)initWithBatchPopularNearbySearchCategories:(id)a0 maxResults:(unsigned int)a1 traits:(id)a2;
- (id)auxiliaryTierRequestedComponentAtIndex:(unsigned long long)a0;
- (id)initWithSpatialPlaceLookupParameters:(id)a0 traits:(id)a1;
- (id)initWithReverseGeocodeCoordinate:(struct { double x0; double x1; })a0 floorOrdinal:(int)a1 includeEntryPoints:(BOOL)a2 preserveOriginalLocation:(BOOL)a3 traits:(id)a4;
- (BOOL)isForwardGeocoderRequest;
- (id)initForTerritoryForLatLngsE7:(id)a0 traits:(id)a1;
- (BOOL)shouldConsiderCaching;
- (id)initWithTransitScheduleAtStation:(unsigned long long)a0 line:(unsigned long long)a1 referenceTripId:(unsigned long long)a2 routingParameters:(id)a3 traits:(id)a4;
- (id)initWithSearchQuery:(id)a0 entryMetadata:(id)a1 metadata:(id)a2 autocompleteEntry:(id)a3 retainedSearch:(id)a4 maxResults:(unsigned int)a5 filters:(id)a6 suppressResultsRequiringAttribution:(BOOL)a7 traits:(id)a8 error:(id *)a9;
- (id)initWithSearchURLQuery:(id)a0 identifier:(id)a1 resultProviderId:(int)a2 contentProvider:(id)a3 maxResults:(unsigned int)a4 traits:(id)a5;
- (id)initWithSearchCategory:(id)a0 venueIdentifier:(id)a1 maxResults:(unsigned int)a2 traits:(id)a3;
- (BOOL)isBrandLookupRequest;
- (id)initWithBrandMUID:(unsigned long long)a0 traits:(id)a1;

@end
