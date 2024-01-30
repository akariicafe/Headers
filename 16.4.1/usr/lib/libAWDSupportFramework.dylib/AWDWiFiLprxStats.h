@interface AWDWiFiLprxStats : PBCodable <NSCopying> {
    struct { unsigned char phyActiveDuration : 1; unsigned char phySearchDuration : 1; unsigned char timestamp : 1; unsigned char lprxEnterCnt : 1; unsigned char lprxExitCnt : 1; unsigned char phyActiveCount : 1; unsigned char phySearchCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPhySearchDuration;
@property (nonatomic) unsigned long long phySearchDuration;
@property (nonatomic) BOOL hasPhySearchCount;
@property (nonatomic) unsigned int phySearchCount;
@property (nonatomic) BOOL hasPhyActiveDuration;
@property (nonatomic) unsigned long long phyActiveDuration;
@property (nonatomic) BOOL hasPhyActiveCount;
@property (nonatomic) unsigned int phyActiveCount;
@property (nonatomic) BOOL hasLprxEnterCnt;
@property (nonatomic) unsigned int lprxEnterCnt;
@property (nonatomic) BOOL hasLprxExitCnt;
@property (nonatomic) unsigned int lprxExitCnt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
