@class PBUnknownFields, GEOPDFeaturePOI, PBDataReader, GEOPDFeatureVenue, GEOPDFeatureBuilding;

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDFeatureBuilding *_featureBuilding;
    GEOPDFeaturePOI *_featurePoi;
    GEOPDFeatureVenue *_featureVenue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_featureBuilding : 1; unsigned char read_featurePoi : 1; unsigned char read_featureVenue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasFeatureVenue;
@property (retain, nonatomic) GEOPDFeatureVenue *featureVenue;
@property (readonly, nonatomic) BOOL hasFeatureBuilding;
@property (retain, nonatomic) GEOPDFeatureBuilding *featureBuilding;
@property (readonly, nonatomic) BOOL hasFeaturePoi;
@property (retain, nonatomic) GEOPDFeaturePOI *featurePoi;
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
