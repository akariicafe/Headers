@class WiFiAnalyticsAWDWiFiNWActivityStateBin, NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityAssoc;

@interface WiFiAnalyticsAWDWiFiNWActivityInterfaceStats : PBCodable <NSCopying> {
    struct { unsigned char consecutivedps : 1; unsigned char dps : 1; unsigned char role : 1; } _has;
}

@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;
@property (retain, nonatomic) NSMutableArray *packets;
@property (retain, nonatomic) NSMutableArray *bytes;
@property (retain, nonatomic) NSMutableArray *peers;
@property (retain, nonatomic) NSMutableArray *npeers;
@property (nonatomic) BOOL hasDps;
@property (nonatomic) unsigned int dps;
@property (nonatomic) BOOL hasConsecutivedps;
@property (nonatomic) unsigned int consecutivedps;
@property (readonly, nonatomic) BOOL hasAssoc;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAssoc *assoc;
@property (readonly, nonatomic) BOOL hasAwdlMode;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityStateBin *awdlMode;

+ (Class)peerType;
+ (Class)packetsType;
+ (Class)bytesType;
+ (Class)npeersType;

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
- (void)addPeer:(id)a0;
- (unsigned long long)peersCount;
- (void)clearPeers;
- (id)peerAtIndex:(unsigned long long)a0;
- (void)addPackets:(id)a0;
- (void)addBytes:(id)a0;
- (void)addNpeers:(id)a0;
- (unsigned long long)packetsCount;
- (void)clearPackets;
- (id)packetsAtIndex:(unsigned long long)a0;
- (unsigned long long)bytesCount;
- (void)clearBytes;
- (unsigned long long)npeersCount;
- (void)clearNpeers;
- (id)npeersAtIndex:(unsigned long long)a0;

@end
