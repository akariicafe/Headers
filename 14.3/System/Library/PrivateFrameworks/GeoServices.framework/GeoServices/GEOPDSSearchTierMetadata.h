@class PBUnknownFields;

@interface GEOPDSSearchTierMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _endIndex;
    unsigned int _startIndex;
    int _tierType;
    struct { unsigned char has_endIndex : 1; unsigned char has_startIndex : 1; unsigned char has_tierType : 1; } _flags;
}

@property (nonatomic) BOOL hasTierType;
@property (nonatomic) int tierType;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) unsigned int endIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)tierTypeAsString:(int)a0;
- (int)StringAsTierType:(id)a0;
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
