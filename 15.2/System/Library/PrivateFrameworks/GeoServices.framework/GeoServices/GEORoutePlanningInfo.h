@class GEOPBTransitArtwork, GEORouteInformation, PBDataReader, GEOFormattedString, GEOAdvisoriesInfo, PBUnknownFields;

@interface GEORoutePlanningInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAdvisoriesInfo *_advisoriesInfo;
    GEOFormattedString *_infrastructureDescription;
    GEOPBTransitArtwork *_labelArtwork;
    GEOFormattedString *_labelDetailText;
    GEORouteInformation *_routePlanningDescription;
    GEOFormattedString *_trafficDescriptionText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_advisoriesInfo : 1; unsigned char read_infrastructureDescription : 1; unsigned char read_labelArtwork : 1; unsigned char read_labelDetailText : 1; unsigned char read_routePlanningDescription : 1; unsigned char read_trafficDescriptionText : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasRoutePlanningDescription;
@property (retain, nonatomic) GEORouteInformation *routePlanningDescription;
@property (readonly, nonatomic) BOOL hasLabelDetailText;
@property (retain, nonatomic) GEOFormattedString *labelDetailText;
@property (readonly, nonatomic) BOOL hasLabelArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *labelArtwork;
@property (readonly, nonatomic) BOOL hasInfrastructureDescription;
@property (retain, nonatomic) GEOFormattedString *infrastructureDescription;
@property (readonly, nonatomic) BOOL hasAdvisoriesInfo;
@property (retain, nonatomic) GEOAdvisoriesInfo *advisoriesInfo;
@property (readonly, nonatomic) BOOL hasTrafficDescriptionText;
@property (retain, nonatomic) GEOFormattedString *trafficDescriptionText;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
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
- (id)dictionaryRepresentation;

@end
