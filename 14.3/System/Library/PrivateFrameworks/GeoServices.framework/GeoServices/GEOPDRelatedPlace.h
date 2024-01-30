@class NSMutableArray, PBUnknownFields;

@interface GEOPDRelatedPlace : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    int _type;
    struct { unsigned char has_type : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *mapsIds;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)mapsIdType;
+ (id)relatedPlacesForPlaceData:(id)a0;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)mapsIdAtIndex:(unsigned long long)a0;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addMapsId:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)mapsIdsCount;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearMapsIds;

@end
