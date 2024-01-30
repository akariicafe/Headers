@class PBUnknownFields;

@interface GEOTransitOccupancyInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _occupancyStatus;
    struct { unsigned char has_occupancyStatus : 1; } _flags;
}

@property (nonatomic) BOOL hasOccupancyStatus;
@property (nonatomic) int occupancyStatus;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)occupancyStatusAsString:(int)a0;
- (int)StringAsOccupancyStatus:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
