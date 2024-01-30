@class GEORPMerchantLookupFeedback, GEORPAddressFeedback, GEORPGroundViewFeedback, GEORPPoiActivityFeedback, GEORPPoiFeedback, PBUnknownFields, GEORPCuratedCollectionFeedback, GEORPTransitPoiFeedback, GEORPLocalityFeedback, GEORPStreetFeedback, GEORPAddToMapFeedback, GEORPTileFeedback, PBDataReader, GEORPPoiEnrichmentUpdate, GEORPSearchFeedback, GEORPDirectionsFeedback, GEORPIncidentFeedback, GEORPPoiImageFeedback;

@interface GEORPFeedbackDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddToMapFeedback *_addMapFeedback;
    GEORPAddressFeedback *_addressPointFeedback;
    GEORPCuratedCollectionFeedback *_curatedCollectionFeedback;
    GEORPDirectionsFeedback *_directionsFeedback;
    GEORPGroundViewFeedback *_groundViewFeedback;
    GEORPIncidentFeedback *_incidentFeedback;
    GEORPLocalityFeedback *_localityFeedback;
    GEORPMerchantLookupFeedback *_merchantLookupFeedback;
    GEORPPoiActivityFeedback *_poiActivityFeedback;
    GEORPPoiEnrichmentUpdate *_poiEnrichmentUpdate;
    GEORPPoiFeedback *_poiFeedback;
    GEORPPoiImageFeedback *_poiImageFeedback;
    GEORPSearchFeedback *_searchFeedback;
    GEORPStreetFeedback *_streetFeedback;
    GEORPTileFeedback *_tileFeedback;
    GEORPTransitPoiFeedback *_transitPoiFeedback;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_addMapFeedback : 1; unsigned char read_addressPointFeedback : 1; unsigned char read_curatedCollectionFeedback : 1; unsigned char read_directionsFeedback : 1; unsigned char read_groundViewFeedback : 1; unsigned char read_incidentFeedback : 1; unsigned char read_localityFeedback : 1; unsigned char read_merchantLookupFeedback : 1; unsigned char read_poiActivityFeedback : 1; unsigned char read_poiEnrichmentUpdate : 1; unsigned char read_poiFeedback : 1; unsigned char read_poiImageFeedback : 1; unsigned char read_searchFeedback : 1; unsigned char read_streetFeedback : 1; unsigned char read_tileFeedback : 1; unsigned char read_transitPoiFeedback : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPoiFeedback;
@property (retain, nonatomic) GEORPPoiFeedback *poiFeedback;
@property (readonly, nonatomic) BOOL hasTransitPoiFeedback;
@property (retain, nonatomic) GEORPTransitPoiFeedback *transitPoiFeedback;
@property (readonly, nonatomic) BOOL hasSearchFeedback;
@property (retain, nonatomic) GEORPSearchFeedback *searchFeedback;
@property (readonly, nonatomic) BOOL hasMerchantLookupFeedback;
@property (retain, nonatomic) GEORPMerchantLookupFeedback *merchantLookupFeedback;
@property (readonly, nonatomic) BOOL hasDirectionsFeedback;
@property (retain, nonatomic) GEORPDirectionsFeedback *directionsFeedback;
@property (readonly, nonatomic) BOOL hasAddressPointFeedback;
@property (retain, nonatomic) GEORPAddressFeedback *addressPointFeedback;
@property (readonly, nonatomic) BOOL hasTileFeedback;
@property (retain, nonatomic) GEORPTileFeedback *tileFeedback;
@property (readonly, nonatomic) BOOL hasGroundViewFeedback;
@property (retain, nonatomic) GEORPGroundViewFeedback *groundViewFeedback;
@property (readonly, nonatomic) BOOL hasPoiEnrichmentUpdate;
@property (retain, nonatomic) GEORPPoiEnrichmentUpdate *poiEnrichmentUpdate;
@property (readonly, nonatomic) BOOL hasIncidentFeedback;
@property (retain, nonatomic) GEORPIncidentFeedback *incidentFeedback;
@property (readonly, nonatomic) BOOL hasPoiImageFeedback;
@property (retain, nonatomic) GEORPPoiImageFeedback *poiImageFeedback;
@property (readonly, nonatomic) BOOL hasCuratedCollectionFeedback;
@property (retain, nonatomic) GEORPCuratedCollectionFeedback *curatedCollectionFeedback;
@property (readonly, nonatomic) BOOL hasPoiActivityFeedback;
@property (retain, nonatomic) GEORPPoiActivityFeedback *poiActivityFeedback;
@property (readonly, nonatomic) BOOL hasAddMapFeedback;
@property (retain, nonatomic) GEORPAddToMapFeedback *addMapFeedback;
@property (readonly, nonatomic) BOOL hasLocalityFeedback;
@property (retain, nonatomic) GEORPLocalityFeedback *localityFeedback;
@property (readonly, nonatomic) BOOL hasStreetFeedback;
@property (retain, nonatomic) GEORPStreetFeedback *streetFeedback;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
