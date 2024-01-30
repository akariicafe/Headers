@class GEORPMerchantLookupFeedback, GEORPAddressFeedback, PBUnknownFields, GEORPGroundViewFeedback, GEORPPoiFeedback, GEORPCuratedCollectionFeedback, GEORPTransitPoiFeedback, GEORPTileFeedback, PBDataReader, GEORPPoiEnrichmentUpdate, GEORPSearchFeedback, GEORPDirectionsFeedback, GEORPIncidentFeedback, GEORPPoiImageFeedback;

@interface GEORPFeedbackDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressFeedback *_addressPointFeedback;
    GEORPCuratedCollectionFeedback *_curatedCollectionFeedback;
    GEORPDirectionsFeedback *_directionsFeedback;
    GEORPGroundViewFeedback *_groundViewFeedback;
    GEORPIncidentFeedback *_incidentFeedback;
    GEORPMerchantLookupFeedback *_merchantLookupFeedback;
    GEORPPoiEnrichmentUpdate *_poiEnrichmentUpdate;
    GEORPPoiFeedback *_poiFeedback;
    GEORPPoiImageFeedback *_poiImageFeedback;
    GEORPSearchFeedback *_searchFeedback;
    GEORPTileFeedback *_tileFeedback;
    GEORPTransitPoiFeedback *_transitPoiFeedback;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_addressPointFeedback : 1; unsigned char read_curatedCollectionFeedback : 1; unsigned char read_directionsFeedback : 1; unsigned char read_groundViewFeedback : 1; unsigned char read_incidentFeedback : 1; unsigned char read_merchantLookupFeedback : 1; unsigned char read_poiEnrichmentUpdate : 1; unsigned char read_poiFeedback : 1; unsigned char read_poiImageFeedback : 1; unsigned char read_searchFeedback : 1; unsigned char read_tileFeedback : 1; unsigned char read_transitPoiFeedback : 1; unsigned char wrote_anyField : 1; } _flags;
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
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
