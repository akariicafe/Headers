@class NSMutableArray;

@interface AWDPowerBBRATConnectedMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *rATPowers;

+ (Class)rATPowerType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRATPower:(id)a0;
- (unsigned long long)rATPowersCount;
- (void)clearRATPowers;
- (id)rATPowerAtIndex:(unsigned long long)a0;

@end
