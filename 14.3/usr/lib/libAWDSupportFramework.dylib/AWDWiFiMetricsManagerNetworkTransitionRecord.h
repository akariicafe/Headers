@interface AWDWiFiMetricsManagerNetworkTransitionRecord : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _channelScanCounts;
    struct { unsigned char beganTimestamp : 1; unsigned char endedTimestamp : 1; unsigned char gotIPTimestamp : 1; unsigned char timestamp : 1; unsigned char errors : 1; unsigned char state : 1; unsigned char trigger : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasBeganTimestamp;
@property (nonatomic) unsigned long long beganTimestamp;
@property (nonatomic) BOOL hasEndedTimestamp;
@property (nonatomic) unsigned long long endedTimestamp;
@property (nonatomic) BOOL hasGotIPTimestamp;
@property (nonatomic) unsigned long long gotIPTimestamp;
@property (nonatomic) BOOL hasState;
@property (nonatomic) unsigned int state;
@property (nonatomic) BOOL hasErrors;
@property (nonatomic) unsigned int errors;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) unsigned int trigger;
@property (readonly, nonatomic) unsigned long long channelScanCountsCount;
@property (readonly, nonatomic) unsigned int *channelScanCounts;

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
- (void)clearChannelScanCounts;
- (unsigned int)channelScanCountAtIndex:(unsigned long long)a0;
- (void)addChannelScanCount:(unsigned int)a0;
- (void)setChannelScanCounts:(unsigned int *)a0 count:(unsigned long long)a1;

@end
