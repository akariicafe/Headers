@class NSMutableArray;

@interface AWDWiFiMetricsManagerRangingReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char awdlLatency : 1; unsigned char numMeasurements : 1; unsigned char peerMasterChannel : 1; unsigned char peerPreferredChannel : 1; unsigned char peerPreferredChannelFlags : 1; unsigned char protocolVersion : 1; unsigned char rangingBandwidth : 1; unsigned char rangingChannel : 1; unsigned char rangingChannelQuality : 1; unsigned char rangingLatency : 1; unsigned char resultFlags : 1; unsigned char resultStatus : 1; unsigned char selfMasterChannel : 1; unsigned char selfPreferredChannel : 1; unsigned char selfPreferredChannelFlags : 1; unsigned char validCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSelfPreferredChannel;
@property (nonatomic) unsigned int selfPreferredChannel;
@property (nonatomic) BOOL hasSelfPreferredChannelFlags;
@property (nonatomic) unsigned int selfPreferredChannelFlags;
@property (nonatomic) BOOL hasSelfMasterChannel;
@property (nonatomic) unsigned int selfMasterChannel;
@property (nonatomic) BOOL hasPeerPreferredChannel;
@property (nonatomic) unsigned int peerPreferredChannel;
@property (nonatomic) BOOL hasPeerPreferredChannelFlags;
@property (nonatomic) unsigned int peerPreferredChannelFlags;
@property (nonatomic) BOOL hasPeerMasterChannel;
@property (nonatomic) unsigned int peerMasterChannel;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) BOOL hasRangingChannel;
@property (nonatomic) unsigned int rangingChannel;
@property (nonatomic) BOOL hasRangingBandwidth;
@property (nonatomic) unsigned int rangingBandwidth;
@property (nonatomic) BOOL hasResultFlags;
@property (nonatomic) unsigned int resultFlags;
@property (nonatomic) BOOL hasResultStatus;
@property (nonatomic) unsigned int resultStatus;
@property (nonatomic) BOOL hasValidCount;
@property (nonatomic) unsigned int validCount;
@property (nonatomic) BOOL hasNumMeasurements;
@property (nonatomic) unsigned int numMeasurements;
@property (nonatomic) BOOL hasAwdlLatency;
@property (nonatomic) unsigned int awdlLatency;
@property (nonatomic) BOOL hasRangingLatency;
@property (nonatomic) unsigned int rangingLatency;
@property (retain, nonatomic) NSMutableArray *rttSamples;
@property (nonatomic) BOOL hasRangingChannelQuality;
@property (nonatomic) unsigned int rangingChannelQuality;

+ (Class)rttSamplesType;

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
- (void)addRttSamples:(id)a0;
- (unsigned long long)rttSamplesCount;
- (void)clearRttSamples;
- (id)rttSamplesAtIndex:(unsigned long long)a0;

@end
