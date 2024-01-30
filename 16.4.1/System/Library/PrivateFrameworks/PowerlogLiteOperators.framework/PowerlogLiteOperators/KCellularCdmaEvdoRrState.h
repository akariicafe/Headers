@interface KCellularCdmaEvdoRrState : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char currAtState : 1; unsigned char currNormalizedState : 1; unsigned char prevAtState : 1; unsigned char prevStateDurMs : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;
@property (nonatomic) BOOL hasPrevAtState;
@property (nonatomic) unsigned int prevAtState;
@property (nonatomic) BOOL hasCurrAtState;
@property (nonatomic) unsigned int currAtState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) unsigned int prevStateDurMs;
@property (nonatomic) BOOL hasCurrNormalizedState;
@property (nonatomic) int currNormalizedState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsCurrNormalizedState:(id)a0;
- (id)currNormalizedStateAsString:(int)a0;

@end
