@class GEODirectionsRequestFeedback, GEOOriginalRoute, GEOMapRegion, GEORecentLocationHistory, GEOClientCapabilities, GEOPrivacyMetadata, GEOLocation, PBUnknownFields, NSMutableArray, GEOPDABClientDatasetMetadata, NSString, PBDataReader, GEOCommonOptions, NSData, GEOAdditionalEnabledMarkets, GEORouteAttributes, GEOOriginalWaypointRoute;

@interface GEODirectionsRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _sessionID;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOClientCapabilities *_clientCapabilities;
    GEOCommonOptions *_commonOptions;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_deviceHistoricalLocations;
    NSMutableArray *_evChargingPreferences;
    GEODirectionsRequestFeedback *_feedback;
    GEOLocation *_lastKnownRoadLocation;
    NSString *_loggedAbExperiment;
    NSData *_nonRecommendedRoutesCache;
    NSData *_originalDirectionsResponseID;
    NSData *_originalRouteID;
    NSMutableArray *_originalRouteZilchPoints;
    GEOOriginalRoute *_originalRoute;
    NSMutableArray *_originalRouteEvInfos;
    GEOOriginalWaypointRoute *_originalWaypointRoute;
    GEOPrivacyMetadata *_privacyMetadata;
    GEORecentLocationHistory *_recentLocationHistory;
    double _requestTime;
    GEORouteAttributes *_routeAttributes;
    NSMutableArray *_serviceTags;
    double _sessionRelativeTimestamp;
    NSData *_sessionState;
    NSMutableArray *_trafficApiResponses;
    NSMutableArray *_trafficSnapshotIds;
    NSMutableArray *_waypointTypeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _departureTime;
    unsigned int _lastEtaDisplayed;
    unsigned int _mainTransportTypeMaxRouteCount;
    int _nonRecommendedRoutesOption;
    int _originalRoutePurpose;
    unsigned int _sequenceNumber;
    unsigned int _timeSinceLastRerouteRequest;
    BOOL _getRouteForZilchPoints;
    BOOL _isFromAPI;
    struct { unsigned char has_sessionID : 1; unsigned char has_requestTime : 1; unsigned char has_sessionRelativeTimestamp : 1; unsigned char has_departureTime : 1; unsigned char has_lastEtaDisplayed : 1; unsigned char has_mainTransportTypeMaxRouteCount : 1; unsigned char has_nonRecommendedRoutesOption : 1; unsigned char has_originalRoutePurpose : 1; unsigned char has_sequenceNumber : 1; unsigned char has_timeSinceLastRerouteRequest : 1; unsigned char has_getRouteForZilchPoints : 1; unsigned char has_isFromAPI : 1; unsigned char read_unknownFields : 1; unsigned char read_abClientMetadata : 1; unsigned char read_additionalEnabledMarkets : 1; unsigned char read_clientCapabilities : 1; unsigned char read_commonOptions : 1; unsigned char read_currentMapRegion : 1; unsigned char read_currentUserLocation : 1; unsigned char read_deviceHistoricalLocations : 1; unsigned char read_evChargingPreferences : 1; unsigned char read_feedback : 1; unsigned char read_lastKnownRoadLocation : 1; unsigned char read_loggedAbExperiment : 1; unsigned char read_nonRecommendedRoutesCache : 1; unsigned char read_originalDirectionsResponseID : 1; unsigned char read_originalRouteID : 1; unsigned char read_originalRouteZilchPoints : 1; unsigned char read_originalRoute : 1; unsigned char read_originalRouteEvInfos : 1; unsigned char read_originalWaypointRoute : 1; unsigned char read_privacyMetadata : 1; unsigned char read_recentLocationHistory : 1; unsigned char read_routeAttributes : 1; unsigned char read_serviceTags : 1; unsigned char read_sessionState : 1; unsigned char read_trafficApiResponses : 1; unsigned char read_trafficSnapshotIds : 1; unsigned char read_waypointTypeds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasRequestTime;
@property (nonatomic) double requestTime;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) NSMutableArray *waypointTypeds;
@property (nonatomic) BOOL hasMainTransportTypeMaxRouteCount;
@property (nonatomic) unsigned int mainTransportTypeMaxRouteCount;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (readonly, nonatomic) BOOL hasCurrentMapRegion;
@property (retain, nonatomic) GEOMapRegion *currentMapRegion;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (retain, nonatomic) NSData *originalRouteID;
@property (retain, nonatomic) NSMutableArray *originalRouteZilchPoints;
@property (readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property (retain, nonatomic) NSData *originalDirectionsResponseID;
@property (retain, nonatomic) NSMutableArray *originalRouteEvInfos;
@property (readonly, nonatomic) BOOL hasOriginalRoute;
@property (retain, nonatomic) GEOOriginalRoute *originalRoute;
@property (readonly, nonatomic) BOOL hasOriginalWaypointRoute;
@property (retain, nonatomic) GEOOriginalWaypointRoute *originalWaypointRoute;
@property (nonatomic) BOOL hasTimeSinceLastRerouteRequest;
@property (nonatomic) unsigned int timeSinceLastRerouteRequest;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (nonatomic) BOOL hasDepartureTime;
@property (nonatomic) int departureTime;
@property (nonatomic) BOOL hasGetRouteForZilchPoints;
@property (nonatomic) BOOL getRouteForZilchPoints;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasFeedback;
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (nonatomic) BOOL hasIsFromAPI;
@property (nonatomic) BOOL isFromAPI;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (readonly, nonatomic) BOOL hasLoggedAbExperiment;
@property (retain, nonatomic) NSString *loggedAbExperiment;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property (nonatomic) BOOL hasOriginalRoutePurpose;
@property (nonatomic) int originalRoutePurpose;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property (nonatomic) BOOL hasNonRecommendedRoutesOption;
@property (nonatomic) int nonRecommendedRoutesOption;
@property (readonly, nonatomic) BOOL hasNonRecommendedRoutesCache;
@property (retain, nonatomic) NSData *nonRecommendedRoutesCache;
@property (nonatomic) BOOL hasLastEtaDisplayed;
@property (nonatomic) unsigned int lastEtaDisplayed;
@property (readonly, nonatomic) BOOL hasRecentLocationHistory;
@property (retain, nonatomic) GEORecentLocationHistory *recentLocationHistory;
@property (readonly, nonatomic) BOOL hasPrivacyMetadata;
@property (retain, nonatomic) GEOPrivacyMetadata *privacyMetadata;
@property (retain, nonatomic) NSMutableArray *evChargingPreferences;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (retain, nonatomic) NSMutableArray *trafficApiResponses;
@property (retain, nonatomic) NSMutableArray *trafficSnapshotIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)deviceHistoricalLocationType;
+ (Class)evChargingPreferenceType;
+ (Class)originalRouteEvInfoType;
+ (Class)originalRouteZilchPointsType;
+ (Class)serviceTagType;
+ (Class)trafficApiResponsesType;
+ (Class)trafficSnapshotIdsType;
+ (Class)waypointTypedType;

- (void)clearLocations;
- (id)initWithData:(id)a0;
- (void)clearDeviceHistoricalLocations;
- (unsigned long long)deviceHistoricalLocationsCount;
- (void)clearServiceTags;
- (unsigned int)requestTypeCode;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)serviceTagsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)serviceTagAtIndex:(unsigned long long)a0;
- (Class)responseClass;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)addServiceTag:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDeviceHistoricalLocation:(id)a0;
- (id)init;
- (void)clearSessionId;
- (BOOL)readFrom:(id)a0;
- (id)initWithFeedback:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (int)StringAsOriginalRoutePurpose:(id)a0;
- (int)StringAsNonRecommendedRoutesOption:(id)a0;
- (void)addEvChargingPreference:(id)a0;
- (void)addOriginalRouteEvInfo:(id)a0;
- (void)addOriginalRouteZilchPoints:(id)a0;
- (void)addTrafficApiResponses:(id)a0;
- (void)addTrafficSnapshotIds:(id)a0;
- (void)addWaypointTyped:(id)a0;
- (void)clearEvChargingPreferences;
- (void)clearOriginalRouteEvInfos;
- (void)clearOriginalRouteZilchPoints;
- (void)clearTrafficApiResponses;
- (void)clearTrafficSnapshotIds;
- (void)clearWaypointTypeds;
- (id)evChargingPreferenceAtIndex:(unsigned long long)a0;
- (unsigned long long)evChargingPreferencesCount;
- (void)initDefaultFeedbackInfo;
- (id)initWithFeedback:(id)a0 sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithQuickETARequest:(id)a0 withFeedback:(id)a1;
- (id)nonRecommendedRoutesOptionAsString:(int)a0;
- (id)originalRouteEvInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)originalRouteEvInfosCount;
- (id)originalRoutePurposeAsString:(int)a0;
- (id)originalRouteZilchPointsAtIndex:(unsigned long long)a0;
- (unsigned long long)originalRouteZilchPointsCount;
- (id)trafficApiResponsesAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficApiResponsesCount;
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)trafficSnapshotIdsCount;
- (id)waypointTypedAtIndex:(unsigned long long)a0;
- (unsigned long long)waypointTypedsCount;

@end
