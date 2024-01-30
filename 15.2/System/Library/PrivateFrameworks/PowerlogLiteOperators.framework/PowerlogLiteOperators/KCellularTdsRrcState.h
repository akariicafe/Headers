@interface KCellularTdsRrcState : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char newRrcState : 1; unsigned char prevStateDurMs : 1; unsigned char rrcState : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasRrcState;
@property (nonatomic) int rrcState;
@property (nonatomic) BOOL hasNewRrcState;
@property (nonatomic) int newRrcState;
@property (nonatomic) BOOL hasPrevStateDurMs;
@property (nonatomic) unsigned int prevStateDurMs;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)rrcStateAsString:(int)a0;
- (int)StringAsRrcState:(id)a0;
- (id)newRrcStateAsString:(int)a0;
- (int)StringAsNewRrcState:(id)a0;

@end
