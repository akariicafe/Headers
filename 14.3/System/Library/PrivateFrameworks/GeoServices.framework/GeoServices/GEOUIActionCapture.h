@interface GEOUIActionCapture : PBCodable <NSCopying> {
    double _duration;
    int _actionType;
    int _sequenceNumber;
    struct { unsigned char has_duration : 1; unsigned char has_actionType : 1; unsigned char has_sequenceNumber : 1; } _flags;
}

@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) int sequenceNumber;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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
- (id)actionTypeAsString:(int)a0;
- (int)StringAsActionType:(id)a0;

@end
