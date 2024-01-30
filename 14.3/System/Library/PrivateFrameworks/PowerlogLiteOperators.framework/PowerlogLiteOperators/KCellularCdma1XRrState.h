@interface KCellularCdma1XRrState : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char currCpState : 1; unsigned char currNormalizedState : 1; unsigned char prevCpState : 1; unsigned char prevStateDurMs : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasPrevCpState;
@property (nonatomic) unsigned int prevCpState;
@property (nonatomic) BOOL hasCurrCpState;
@property (nonatomic) unsigned int currCpState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) unsigned int prevStateDurMs;
@property (nonatomic) BOOL hasCurrNormalizedState;
@property (nonatomic) int currNormalizedState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)currNormalizedStateAsString:(int)a0;
- (int)StringAsCurrNormalizedState:(id)a0;

@end
