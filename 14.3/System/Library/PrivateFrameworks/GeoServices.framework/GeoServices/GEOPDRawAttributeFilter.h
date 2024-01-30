@class NSMutableArray, PBUnknownFields;

@interface GEOPDRawAttributeFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_keys;
}

@property (retain, nonatomic) NSMutableArray *keys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)keyType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)keyAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addKey:(id)a0;
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
- (unsigned long long)keysCount;
- (void)clearKeys;
- (id)initWithDictionary:(id)a0;

@end
