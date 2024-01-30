@class NSUUID, NSData, GEOAdditionalEnabledMarkets, NSArray, GEOClientCapabilities, GEORouteAttributes, GEOPDABClientDatasetMetadata, NSString, NSMutableArray, PBUnknownFields, PBDataReader;

@interface GEOTransitRouteUpdateRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    NSData *_directionsResponseId;
    GEOAdditionalEnabledMarkets *_originalAdditionalEnabledMarkets;
    GEOClientCapabilities *_originalClientCapabilities;
    GEORouteAttributes *_originalRouteAttributes;
    NSMutableArray *_originalWaypoints;
    NSString *_requestingAppId;
    NSMutableArray *_routeIdentifiers;
    NSMutableArray *_serviceTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_abClientMetadata : 1; unsigned char read_directionsResponseId : 1; unsigned char read_originalAdditionalEnabledMarkets : 1; unsigned char read_originalClientCapabilities : 1; unsigned char read_originalRouteAttributes : 1; unsigned char read_originalWaypoints : 1; unsigned char read_requestingAppId : 1; unsigned char read_routeIdentifiers : 1; unsigned char read_serviceTags : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSUUID *clientRouteID;
@property (readonly, nonatomic) NSArray *allClientRouteIDs;
@property (retain, nonatomic) NSMutableArray *routeIdentifiers;
@property (readonly, nonatomic) BOOL hasOriginalClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities *originalClientCapabilities;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (retain, nonatomic) NSMutableArray *originalWaypoints;
@property (readonly, nonatomic) BOOL hasOriginalRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *originalRouteAttributes;
@property (readonly, nonatomic) BOOL hasOriginalAdditionalEnabledMarkets;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *originalAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasDirectionsResponseId;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (readonly, nonatomic) BOOL hasRequestingAppId;
@property (retain, nonatomic) NSString *requestingAppId;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)transitRouteUpdateRequestWithDirectionsRequest:(id)a0 directionsResponse:(id)a1 composedRoutes:(id)a2;
+ (Class)serviceTagType;
+ (Class)routeIdentifierType;
+ (Class)originalWaypointType;
+ (id)transitRouteUpdateRequestWithDirectionsRequest:(id)a0 directionsResponse:(id)a1;
+ (id)mergedTransitRouteUpdateRequests:(id)a0;
+ (id)splitTransitRouteUpdateRequests:(id)a0;
+ (BOOL)isValid:(id)a0;

- (void)addServiceTag:(id)a0;
- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (Class)responseClass;
- (id)init;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)clearServiceTags;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)serviceTagsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRouteIdentifier:(id)a0;
- (void)addOriginalWaypoint:(id)a0;
- (unsigned long long)routeIdentifiersCount;
- (void)clearRouteIdentifiers;
- (id)routeIdentifierAtIndex:(unsigned long long)a0;
- (unsigned long long)originalWaypointsCount;
- (void)clearOriginalWaypoints;
- (id)originalWaypointAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)serviceTagAtIndex:(unsigned long long)a0;

@end
