@class AWDWiFiNWActivityAssoc, NSMutableArray, AWDWiFiNWActivityStateBin;

@interface AWDWiFiNWActivityInterfaceStats : PBCodable <NSCopying> {
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
@property (retain, nonatomic) AWDWiFiNWActivityAssoc *assoc;
@property (readonly, nonatomic) BOOL hasAwdlMode;
@property (retain, nonatomic) AWDWiFiNWActivityStateBin *awdlMode;

+ (Class)packetsType;
+ (Class)peerType;
+ (Class)bytesType;
+ (Class)npeersType;

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
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;
- (id)packetsAtIndex:(unsigned long long)a0;
- (void)addPackets:(id)a0;
- (void)clearPackets;
- (unsigned long long)packetsCount;
- (void)addBytes:(id)a0;
- (void)addNpeers:(id)a0;
- (void)addPeer:(id)a0;
- (id)bytesAtIndex:(unsigned long long)a0;
- (unsigned long long)bytesCount;
- (void)clearBytes;
- (void)clearNpeers;
- (void)clearPeers;
- (id)npeersAtIndex:(unsigned long long)a0;
- (unsigned long long)npeersCount;
- (id)peerAtIndex:(unsigned long long)a0;
- (unsigned long long)peersCount;

@end
