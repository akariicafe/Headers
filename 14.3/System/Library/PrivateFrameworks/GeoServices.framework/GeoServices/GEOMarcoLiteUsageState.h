@interface GEOMarcoLiteUsageState : PBCodable <NSCopying> {
    int _stateExitReason;
    unsigned int _stateTime;
    int _stateType;
    unsigned int _stateValue;
    struct { unsigned char has_stateExitReason : 1; unsigned char has_stateTime : 1; unsigned char has_stateType : 1; unsigned char has_stateValue : 1; } _flags;
}

@property (nonatomic) BOOL hasStateType;
@property (nonatomic) int stateType;
@property (nonatomic) BOOL hasStateValue;
@property (nonatomic) unsigned int stateValue;
@property (nonatomic) BOOL hasStateTime;
@property (nonatomic) unsigned int stateTime;
@property (nonatomic) BOOL hasStateExitReason;
@property (nonatomic) int stateExitReason;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStateType:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (id)stateExitReasonAsString:(int)a0;
- (int)StringAsStateExitReason:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)stateTypeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
