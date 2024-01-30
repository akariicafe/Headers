@class AWDChipCountersTx, AWDMacCountersRx, AWDChipCountersRx, AWDChipErrorCountersTx, AWDMacCountersRxErrors, AWDWiFiMetricsManagerFrameCounterStats, NSMutableArray, AWDWPA2Counters, AWDRxPhyErrors;

@interface AWDWiFiMetricsManagerChipCounters : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasFrameCounters;
@property (retain, nonatomic) AWDWiFiMetricsManagerFrameCounterStats *frameCounters;
@property (readonly, nonatomic) BOOL hasTxGeneralStats;
@property (retain, nonatomic) AWDChipCountersTx *txGeneralStats;
@property (readonly, nonatomic) BOOL hasTxErrorStats;
@property (retain, nonatomic) AWDChipErrorCountersTx *txErrorStats;
@property (readonly, nonatomic) BOOL hasRxGeneralStats;
@property (retain, nonatomic) AWDChipCountersRx *rxGeneralStats;
@property (readonly, nonatomic) BOOL hasRxMACErrorStats;
@property (retain, nonatomic) AWDMacCountersRxErrors *rxMACErrorStats;
@property (readonly, nonatomic) BOOL hasRxMACCounterStats;
@property (retain, nonatomic) AWDMacCountersRx *rxMACCounterStats;
@property (readonly, nonatomic) BOOL hasRxPhyErrors;
@property (retain, nonatomic) AWDRxPhyErrors *rxPhyErrors;
@property (readonly, nonatomic) BOOL hasUcastWPA2Counters;
@property (retain, nonatomic) AWDWPA2Counters *ucastWPA2Counters;
@property (readonly, nonatomic) BOOL hasMcastWPA2Counters;
@property (retain, nonatomic) AWDWPA2Counters *mcastWPA2Counters;
@property (retain, nonatomic) NSMutableArray *frameCounterPerInterfaces;

+ (Class)frameCounterPerInterfaceType;

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
- (void)addFrameCounterPerInterface:(id)a0;
- (void)clearFrameCounterPerInterfaces;
- (id)frameCounterPerInterfaceAtIndex:(unsigned long long)a0;
- (unsigned long long)frameCounterPerInterfacesCount;

@end
