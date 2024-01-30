@class AWDSidecarPeerTraffic, AWDSidecarBssSteering;

@interface AWDWiFiAwdlSidecar : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _channelSequences;
    struct { unsigned char bgDuration : 1; unsigned char fgDuration : 1; unsigned char timestamp : 1; unsigned char bgEntryCount : 1; unsigned char dfspState : 1; unsigned char infraDisconnectedCount : 1; unsigned char peerRssi24G : 1; unsigned char peerRssi5G : 1; unsigned char isSDB : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasFgDuration;
@property (nonatomic) unsigned long long fgDuration;
@property (nonatomic) BOOL hasBgDuration;
@property (nonatomic) unsigned long long bgDuration;
@property (nonatomic) BOOL hasBgEntryCount;
@property (nonatomic) unsigned int bgEntryCount;
@property (nonatomic) BOOL hasPeerRssi24G;
@property (nonatomic) int peerRssi24G;
@property (nonatomic) BOOL hasPeerRssi5G;
@property (nonatomic) int peerRssi5G;
@property (nonatomic) BOOL hasIsSDB;
@property (nonatomic) BOOL isSDB;
@property (readonly, nonatomic) BOOL hasSidecarBssSteering;
@property (retain, nonatomic) AWDSidecarBssSteering *sidecarBssSteering;
@property (readonly, nonatomic) BOOL hasSidecarPeerTraffic;
@property (retain, nonatomic) AWDSidecarPeerTraffic *sidecarPeerTraffic;
@property (nonatomic) BOOL hasDfspState;
@property (nonatomic) unsigned int dfspState;
@property (nonatomic) BOOL hasInfraDisconnectedCount;
@property (nonatomic) unsigned int infraDisconnectedCount;
@property (readonly, nonatomic) unsigned long long channelSequencesCount;
@property (readonly, nonatomic) unsigned int *channelSequences;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)clearChannelSequences;
- (unsigned int)channelSequenceAtIndex:(unsigned long long)a0;
- (void)addChannelSequence:(unsigned int)a0;
- (void)setChannelSequences:(unsigned int *)a0 count:(unsigned long long)a1;

@end
