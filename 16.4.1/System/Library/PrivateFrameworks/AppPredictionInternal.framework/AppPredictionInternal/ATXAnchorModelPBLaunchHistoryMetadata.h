@interface ATXAnchorModelPBLaunchHistoryMetadata : PBCodable <NSCopying> {
    struct { unsigned char launchesInLast12Hours : 1; unsigned char launchesInLast14Days : 1; unsigned char launchesInLast24Hours : 1; unsigned char launchesInLast28Days : 1; unsigned char launchesInLast2Hours : 1; unsigned char launchesInLast48Hours : 1; unsigned char launchesInLast7Days : 1; } _has;
}

@property (nonatomic) BOOL hasLaunchesInLast2Hours;
@property (nonatomic) unsigned int launchesInLast2Hours;
@property (nonatomic) BOOL hasLaunchesInLast7Days;
@property (nonatomic) unsigned int launchesInLast7Days;
@property (nonatomic) BOOL hasLaunchesInLast14Days;
@property (nonatomic) unsigned int launchesInLast14Days;
@property (nonatomic) BOOL hasLaunchesInLast28Days;
@property (nonatomic) unsigned int launchesInLast28Days;
@property (nonatomic) BOOL hasLaunchesInLast12Hours;
@property (nonatomic) unsigned int launchesInLast12Hours;
@property (nonatomic) BOOL hasLaunchesInLast24Hours;
@property (nonatomic) unsigned int launchesInLast24Hours;
@property (nonatomic) BOOL hasLaunchesInLast48Hours;
@property (nonatomic) unsigned int launchesInLast48Hours;

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
