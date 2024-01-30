@class NSString, PBDataReader, GEOPDMapsIdentifier;

@interface GEOPDPlaceQuestionnairePlaceInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_countryCode;
    NSString *_mapsCategoryId;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_countryCode : 1; unsigned char read_mapsCategoryId : 1; unsigned char read_mapsId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (readonly, nonatomic) BOOL hasMapsCategoryId;
@property (retain, nonatomic) NSString *mapsCategoryId;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;

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
- (id)initWithDictionary:(id)a0;

@end
