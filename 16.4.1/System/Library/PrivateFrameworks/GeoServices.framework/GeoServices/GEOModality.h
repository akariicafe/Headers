@interface GEOModality : PBCodable <NSCopying> {
    double _timestamp;
    int _confidence;
    BOOL _expectedModality;
    BOOL _notMoving;
    struct { unsigned char has_timestamp : 1; unsigned char has_confidence : 1; unsigned char has_expectedModality : 1; unsigned char has_notMoving : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasExpectedModality;
@property (nonatomic) BOOL expectedModality;
@property (nonatomic) BOOL hasNotMoving;
@property (nonatomic) BOOL notMoving;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int confidence;

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
- (int)StringAsConfidence:(id)a0;
- (id)confidenceAsString:(int)a0;

@end
