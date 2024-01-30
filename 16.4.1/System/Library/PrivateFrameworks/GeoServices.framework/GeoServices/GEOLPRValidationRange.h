@class NSString;

@interface GEOLPRValidationRange : PBCodable <NSCopying> {
    NSString *_validCharacters;
    int _end;
    int _start;
    struct { unsigned char has_end : 1; unsigned char has_start : 1; } _flags;
}

@property (nonatomic) BOOL hasStart;
@property (nonatomic) int start;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) int end;
@property (readonly, nonatomic) BOOL hasValidCharacters;
@property (retain, nonatomic) NSString *validCharacters;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
