@class PBUnknownFields;

@interface GEOAttribute : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _key;
    unsigned int _value;
    struct { unsigned char has_key : 1; unsigned char has_value : 1; } _flags;
}

@property (nonatomic) BOOL hasKey;
@property (nonatomic) int key;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned int value;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)keyAsString:(int)a0;
- (int)StringAsKey:(id)a0;
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
