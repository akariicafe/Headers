@class AWDSidecarPeerTraffic, AWDSidecarBssSteering, NSString;

@interface AWDWiFiAwdlSidecarCoalesced : PBCodable <NSCopying> {
    struct { unsigned char remoteBgDuration : 1; unsigned char remoteFgDuration : 1; unsigned char selfBgDuration : 1; unsigned char selfFgDuration : 1; unsigned char timestamp : 1; unsigned char pencilOffCount : 1; unsigned char pencilOnCount : 1; unsigned char remoteBgEntryCount : 1; unsigned char remotePeerRssi24G : 1; unsigned char remotePeerRssi5G : 1; unsigned char selfBgEntryCount : 1; unsigned char selfPeerRssi24G : 1; unsigned char selfPeerRssi5G : 1; unsigned char remotefIsSDB : 1; unsigned char selfIsSDB : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSelfFgDuration;
@property (nonatomic) unsigned long long selfFgDuration;
@property (nonatomic) BOOL hasSelfBgDuration;
@property (nonatomic) unsigned long long selfBgDuration;
@property (nonatomic) BOOL hasSelfBgEntryCount;
@property (nonatomic) unsigned int selfBgEntryCount;
@property (nonatomic) BOOL hasSelfPeerRssi24G;
@property (nonatomic) int selfPeerRssi24G;
@property (nonatomic) BOOL hasSelfPeerRssi5G;
@property (nonatomic) int selfPeerRssi5G;
@property (nonatomic) BOOL hasSelfIsSDB;
@property (nonatomic) BOOL selfIsSDB;
@property (nonatomic) BOOL hasRemoteFgDuration;
@property (nonatomic) unsigned long long remoteFgDuration;
@property (nonatomic) BOOL hasRemoteBgDuration;
@property (nonatomic) unsigned long long remoteBgDuration;
@property (nonatomic) BOOL hasRemoteBgEntryCount;
@property (nonatomic) unsigned int remoteBgEntryCount;
@property (nonatomic) BOOL hasRemotePeerRssi24G;
@property (nonatomic) int remotePeerRssi24G;
@property (nonatomic) BOOL hasRemotePeerRssi5G;
@property (nonatomic) int remotePeerRssi5G;
@property (nonatomic) BOOL hasRemotefIsSDB;
@property (nonatomic) BOOL remotefIsSDB;
@property (readonly, nonatomic) BOOL hasSelfSidecarBssSteering;
@property (retain, nonatomic) AWDSidecarBssSteering *selfSidecarBssSteering;
@property (readonly, nonatomic) BOOL hasRemoteSidecarBssSteering;
@property (retain, nonatomic) AWDSidecarBssSteering *remoteSidecarBssSteering;
@property (readonly, nonatomic) BOOL hasSelfSidecarPeerTraffic;
@property (retain, nonatomic) AWDSidecarPeerTraffic *selfSidecarPeerTraffic;
@property (readonly, nonatomic) BOOL hasRemoteSidecarPeerTraffic;
@property (retain, nonatomic) AWDSidecarPeerTraffic *remoteSidecarPeerTraffic;
@property (nonatomic) BOOL hasPencilOnCount;
@property (nonatomic) unsigned int pencilOnCount;
@property (nonatomic) BOOL hasPencilOffCount;
@property (nonatomic) unsigned int pencilOffCount;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;

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

@end
