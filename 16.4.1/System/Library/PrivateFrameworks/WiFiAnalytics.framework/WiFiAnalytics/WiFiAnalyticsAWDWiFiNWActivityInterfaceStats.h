@class NSString, NSMutableArray, WiFiAnalyticsAWDWiFiNWActivityAssoc;

@interface WiFiAnalyticsAWDWiFiNWActivityInterfaceStats : PBCodable <NSCopying> {
    struct { unsigned char consecutivedps : 1; unsigned char dps : 1; unsigned char enabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRole;
@property (retain, nonatomic) NSString *role;
@property (retain, nonatomic) NSMutableArray *packets;
@property (retain, nonatomic) NSMutableArray *bytes;
@property (retain, nonatomic) NSMutableArray *peers;
@property (nonatomic) BOOL hasDps;
@property (nonatomic) unsigned int dps;
@property (nonatomic) BOOL hasConsecutivedps;
@property (nonatomic) unsigned int consecutivedps;
@property (readonly, nonatomic) BOOL hasAssoc;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAssoc *assoc;
@property (retain, nonatomic) NSMutableArray *awdlModes;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) unsigned int enabled;
@property (retain, nonatomic) NSMutableArray *enableStates;
@property (retain, nonatomic) NSMutableArray *nss;
@property (retain, nonatomic) NSMutableArray *phymodes;

+ (Class)packetsType;
+ (Class)peerType;
+ (Class)bytesType;
+ (Class)nssType;
+ (Class)enableStateType;
+ (Class)awdlModeType;
+ (Class)phymodeType;

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
- (void)addBytes:(id)a0;
- (void)addPeer:(id)a0;
- (id)bytesAtIndex:(unsigned long long)a0;
- (unsigned long long)bytesCount;
- (void)clearBytes;
- (void)clearPeers;
- (id)peerAtIndex:(unsigned long long)a0;
- (unsigned long long)peersCount;
- (void)addEnableState:(id)a0;
- (void)addNss:(id)a0;
- (id)phymodeAtIndex:(unsigned long long)a0;
- (void)addAwdlMode:(id)a0;
- (void)addPhymode:(id)a0;
- (id)awdlModeAtIndex:(unsigned long long)a0;
- (unsigned long long)awdlModesCount;
- (void)clearAwdlModes;
- (void)clearEnableStates;
- (void)clearNss;
- (void)clearPhymodes;
- (id)enableStateAtIndex:(unsigned long long)a0;
- (unsigned long long)enableStatesCount;
- (id)nssAtIndex:(unsigned long long)a0;
- (unsigned long long)nssCount;
- (unsigned long long)phymodesCount;

@end
