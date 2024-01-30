@interface GEOAnalyticsPipelineEvalTypeCount : PBCodable <NSCopying> {
    unsigned int _count;
    int _type;
    struct { unsigned char has_count : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
- (id)typeAsString:(int)a0;

@end
