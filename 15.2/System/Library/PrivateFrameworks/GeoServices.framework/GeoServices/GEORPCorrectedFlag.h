@interface GEORPCorrectedFlag : PBCodable <NSCopying> {
    int _flag;
    BOOL _correctedValue;
    BOOL _originalValue;
    struct { unsigned char has_flag : 1; unsigned char has_correctedValue : 1; unsigned char has_originalValue : 1; } _flags;
}

@property (nonatomic) BOOL hasFlag;
@property (nonatomic) int flag;
@property (nonatomic) BOOL hasOriginalValue;
@property (nonatomic) BOOL originalValue;
@property (nonatomic) BOOL hasCorrectedValue;
@property (nonatomic) BOOL correctedValue;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)flagAsString:(int)a0;
- (int)StringAsFlag:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
