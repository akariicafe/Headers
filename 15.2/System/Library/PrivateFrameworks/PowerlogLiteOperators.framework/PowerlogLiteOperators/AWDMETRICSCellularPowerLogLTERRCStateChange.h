@interface AWDMETRICSCellularPowerLogLTERRCStateChange : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cause : 1; unsigned char prevState : 1; unsigned char prevStateDurMs : 1; unsigned char state : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasPrevState;
@property (nonatomic) int prevState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) unsigned int prevStateDurMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasCause;
@property (nonatomic) int cause;

- (int)StringAsState:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)stateAsString:(int)a0;
- (id)dictionaryRepresentation;
- (id)prevStateAsString:(int)a0;
- (int)StringAsPrevState:(id)a0;
- (id)causeAsString:(int)a0;
- (int)StringAsCause:(id)a0;

@end
