@class NSString, NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityTxCompletions;

@interface WiFiAnalyticsAWDWiFiNWActivityPeerStats : PBCodable <NSCopying> {
    struct { unsigned char role : 1; } _has;
}

@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;
@property (readonly, nonatomic) BOOL hasHashID;
@property (retain, nonatomic) NSString *hashID;
@property (retain, nonatomic) NSMutableArray *rssis;
@property (retain, nonatomic) NSMutableArray *ccas;
@property (retain, nonatomic) NSMutableArray *snrs;
@property (retain, nonatomic) NSMutableArray *packets;
@property (retain, nonatomic) NSMutableArray *bytes;
@property (retain, nonatomic) NSMutableArray *txLatencyBKs;
@property (retain, nonatomic) NSMutableArray *txLatencyBEs;
@property (retain, nonatomic) NSMutableArray *txLatencyVOs;
@property (retain, nonatomic) NSMutableArray *txLatencyVIs;
@property (readonly, nonatomic) BOOL hasCompletions;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityTxCompletions *completions;
@property (retain, nonatomic) NSMutableArray *acCompletions;

+ (Class)snrType;
+ (Class)ccaType;
+ (Class)packetsType;
+ (Class)bytesType;
+ (Class)rssiType;
+ (Class)txLatencyBKType;
+ (Class)txLatencyBEType;
+ (Class)txLatencyVOType;
+ (Class)txLatencyVIType;
+ (Class)acCompletionsType;

- (id)bytesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)roleAsString:(int)a0;
- (int)StringAsRole:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addCca:(id)a0;
- (void)addSnr:(id)a0;
- (void)addPackets:(id)a0;
- (void)addBytes:(id)a0;
- (unsigned long long)packetsCount;
- (void)clearPackets;
- (id)packetsAtIndex:(unsigned long long)a0;
- (unsigned long long)bytesCount;
- (void)clearBytes;
- (void)addRssi:(id)a0;
- (void)addTxLatencyBK:(id)a0;
- (void)addTxLatencyBE:(id)a0;
- (void)addTxLatencyVO:(id)a0;
- (void)addTxLatencyVI:(id)a0;
- (void)addAcCompletions:(id)a0;
- (unsigned long long)rssisCount;
- (void)clearRssis;
- (id)rssiAtIndex:(unsigned long long)a0;
- (unsigned long long)ccasCount;
- (void)clearCcas;
- (id)ccaAtIndex:(unsigned long long)a0;
- (unsigned long long)snrsCount;
- (void)clearSnrs;
- (id)snrAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyBKsCount;
- (void)clearTxLatencyBKs;
- (id)txLatencyBKAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyBEsCount;
- (void)clearTxLatencyBEs;
- (id)txLatencyBEAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyVOsCount;
- (void)clearTxLatencyVOs;
- (id)txLatencyVOAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyVIsCount;
- (void)clearTxLatencyVIs;
- (id)txLatencyVIAtIndex:(unsigned long long)a0;
- (unsigned long long)acCompletionsCount;
- (void)clearAcCompletions;
- (id)acCompletionsAtIndex:(unsigned long long)a0;

@end
