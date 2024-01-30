@class PBDataReader, GEOPDBatchReverseGeocodeResult, GEOPDPlaceQuestionnaireResult, GEOPDPlace, GEOPDCollectionResult, GEOPDPublisherResult, PBUnknownFields;

@interface GEOPDMapsResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDBatchReverseGeocodeResult *_batchReverseGeocode;
    GEOPDCollectionResult *_collection;
    GEOPDPlaceQuestionnaireResult *_placeQuestionnaire;
    GEOPDPlace *_place;
    GEOPDPublisherResult *_publisher;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _resultType;
    struct { unsigned char has_resultType : 1; unsigned char read_unknownFields : 1; unsigned char read_batchReverseGeocode : 1; unsigned char read_collection : 1; unsigned char read_placeQuestionnaire : 1; unsigned char read_place : 1; unsigned char read_publisher : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasResultType;
@property (nonatomic) int resultType;
@property (readonly, nonatomic) BOOL hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (readonly, nonatomic) BOOL hasCollection;
@property (retain, nonatomic) GEOPDCollectionResult *collection;
@property (readonly, nonatomic) BOOL hasPublisher;
@property (retain, nonatomic) GEOPDPublisherResult *publisher;
@property (readonly, nonatomic) BOOL hasPlaceQuestionnaire;
@property (retain, nonatomic) GEOPDPlaceQuestionnaireResult *placeQuestionnaire;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocode;
@property (retain, nonatomic) GEOPDBatchReverseGeocodeResult *batchReverseGeocode;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (int)StringAsResultType:(id)a0;
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
- (id)resultTypeAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
