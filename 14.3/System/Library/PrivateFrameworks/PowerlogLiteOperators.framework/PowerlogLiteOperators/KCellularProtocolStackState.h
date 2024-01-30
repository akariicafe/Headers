@interface KCellularProtocolStackState : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char currState : 1; unsigned char prevState : 1; unsigned char prevStateDurMs : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasPrevState;
@property (nonatomic) int prevState;
@property (nonatomic) BOOL hasCurrState;
@property (nonatomic) int currState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) unsigned int prevStateDurMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)prevStateAsString:(int)a0;
- (int)StringAsPrevState:(id)a0;
- (id)currStateAsString:(int)a0;
- (int)StringAsCurrState:(id)a0;

@end
