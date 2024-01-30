@class NSMutableArray;

@interface AWDPowerBBAppRRCMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numRRCConnections : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *appConnStats;
@property (nonatomic) BOOL hasNumRRCConnections;
@property (nonatomic) unsigned int numRRCConnections;

+ (Class)appConnStatsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addAppConnStats:(id)a0;
- (id)appConnStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)appConnStatsCount;
- (void)clearAppConnStats;

@end
