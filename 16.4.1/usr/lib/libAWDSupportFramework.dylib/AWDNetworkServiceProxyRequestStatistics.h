@class NSString;

@interface AWDNetworkServiceProxyRequestStatistics : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _directConnectionFirstByteBuckets;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _directConnectionLastByteBuckets;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _firstByteBuckets;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _lastByteBuckets;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _udpRttBuckets;
    struct { unsigned char timestamp : 1; unsigned char directConnectionCount : 1; unsigned char directConnectionFailedCount : 1; unsigned char interfaceType : 1; unsigned char protocolType : 1; unsigned char requestCount : 1; unsigned char requestFailedCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) int interfaceType;
@property (readonly, nonatomic) BOOL hasFirstPartyServiceName;
@property (retain, nonatomic) NSString *firstPartyServiceName;
@property (nonatomic) BOOL hasRequestCount;
@property (nonatomic) unsigned int requestCount;
@property (nonatomic) BOOL hasRequestFailedCount;
@property (nonatomic) unsigned int requestFailedCount;
@property (nonatomic) BOOL hasDirectConnectionCount;
@property (nonatomic) unsigned int directConnectionCount;
@property (nonatomic) BOOL hasDirectConnectionFailedCount;
@property (nonatomic) unsigned int directConnectionFailedCount;
@property (readonly, nonatomic) unsigned long long firstByteBucketsCount;
@property (readonly, nonatomic) unsigned int *firstByteBuckets;
@property (readonly, nonatomic) unsigned long long lastByteBucketsCount;
@property (readonly, nonatomic) unsigned int *lastByteBuckets;
@property (readonly, nonatomic) unsigned long long directConnectionFirstByteBucketsCount;
@property (readonly, nonatomic) unsigned int *directConnectionFirstByteBuckets;
@property (readonly, nonatomic) unsigned long long directConnectionLastByteBucketsCount;
@property (readonly, nonatomic) unsigned int *directConnectionLastByteBuckets;
@property (readonly, nonatomic) unsigned long long udpRttBucketsCount;
@property (readonly, nonatomic) unsigned int *udpRttBuckets;
@property (nonatomic) BOOL hasProtocolType;
@property (nonatomic) int protocolType;

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
- (int)StringAsInterfaceType:(id)a0;
- (id)interfaceTypeAsString:(int)a0;
- (int)StringAsProtocolType:(id)a0;
- (void)addDirectConnectionFirstByteBuckets:(unsigned int)a0;
- (void)addDirectConnectionLastByteBuckets:(unsigned int)a0;
- (void)addFirstByteBuckets:(unsigned int)a0;
- (void)addLastByteBuckets:(unsigned int)a0;
- (void)addUdpRttBuckets:(unsigned int)a0;
- (void)clearDirectConnectionFirstByteBuckets;
- (void)clearDirectConnectionLastByteBuckets;
- (void)clearFirstByteBuckets;
- (void)clearLastByteBuckets;
- (void)clearUdpRttBuckets;
- (unsigned int)directConnectionFirstByteBucketsAtIndex:(unsigned long long)a0;
- (unsigned int)directConnectionLastByteBucketsAtIndex:(unsigned long long)a0;
- (unsigned int)firstByteBucketsAtIndex:(unsigned long long)a0;
- (unsigned int)lastByteBucketsAtIndex:(unsigned long long)a0;
- (id)protocolTypeAsString:(int)a0;
- (void)setDirectConnectionFirstByteBuckets:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setDirectConnectionLastByteBuckets:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setFirstByteBuckets:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setLastByteBuckets:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setUdpRttBuckets:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)udpRttBucketsAtIndex:(unsigned long long)a0;

@end
