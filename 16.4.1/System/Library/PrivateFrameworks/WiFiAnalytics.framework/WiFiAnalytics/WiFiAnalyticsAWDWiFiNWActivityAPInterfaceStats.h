@class NSString, NSMutableArray;

@interface WiFiAnalyticsAWDWiFiNWActivityAPInterfaceStats : PBCodable <NSCopying> {
    struct { unsigned char enabled : 1; unsigned char peerCount : 1; unsigned char peersAdded : 1; unsigned char peersRemoved : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRole;
@property (retain, nonatomic) NSString *role;
@property (retain, nonatomic) NSMutableArray *packets;
@property (retain, nonatomic) NSMutableArray *bytes;
@property (retain, nonatomic) NSMutableArray *npeers;
@property (nonatomic) BOOL hasPeerCount;
@property (nonatomic) unsigned int peerCount;
@property (nonatomic) BOOL hasPeersAdded;
@property (nonatomic) unsigned int peersAdded;
@property (nonatomic) BOOL hasPeersRemoved;
@property (nonatomic) unsigned int peersRemoved;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) unsigned int enabled;
@property (retain, nonatomic) NSMutableArray *enableStates;
@property (retain, nonatomic) NSMutableArray *txLatencyBKs;
@property (retain, nonatomic) NSMutableArray *txLatencyBEs;
@property (retain, nonatomic) NSMutableArray *txLatencyVOs;
@property (retain, nonatomic) NSMutableArray *txLatencyVIs;

+ (Class)packetsType;
+ (Class)txLatencyBEType;
+ (Class)txLatencyVIType;
+ (Class)txLatencyBKType;
+ (Class)txLatencyVOType;
+ (Class)bytesType;
+ (Class)npeersType;
+ (Class)enableStateType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)packetsAtIndex:(unsigned long long)a0;
- (void)addPackets:(id)a0;
- (void)clearPackets;
- (unsigned long long)packetsCount;
- (void)addTxLatencyBK:(id)a0;
- (void)addTxLatencyVO:(id)a0;
- (void)addTxLatencyBE:(id)a0;
- (void)addTxLatencyVI:(id)a0;
- (void)addBytes:(id)a0;
- (void)addNpeers:(id)a0;
- (id)bytesAtIndex:(unsigned long long)a0;
- (unsigned long long)bytesCount;
- (void)clearBytes;
- (void)clearNpeers;
- (void)clearTxLatencyBEs;
- (void)clearTxLatencyBKs;
- (void)clearTxLatencyVIs;
- (void)clearTxLatencyVOs;
- (id)npeersAtIndex:(unsigned long long)a0;
- (unsigned long long)npeersCount;
- (id)txLatencyBEAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyBEsCount;
- (id)txLatencyBKAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyBKsCount;
- (id)txLatencyVIAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyVIsCount;
- (id)txLatencyVOAtIndex:(unsigned long long)a0;
- (unsigned long long)txLatencyVOsCount;
- (void)addEnableState:(id)a0;
- (void)clearEnableStates;
- (id)enableStateAtIndex:(unsigned long long)a0;
- (unsigned long long)enableStatesCount;

@end
