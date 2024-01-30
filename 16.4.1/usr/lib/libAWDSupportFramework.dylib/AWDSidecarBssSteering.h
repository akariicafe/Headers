@interface AWDSidecarBssSteering : PBCodable <NSCopying> {
    struct { unsigned char attemptPeerCount : 1; unsigned char attemptStatus : 1; unsigned char bssSyncChannel : 1; unsigned char bssSyncChannelFlags : 1; unsigned char completionTime : 1; unsigned char peerChannel : 1; unsigned char peerChannelFlags : 1; unsigned char policyCode : 1; unsigned char selfInfraChannel : 1; unsigned char selfInfraChannelFlags : 1; unsigned char targetChannel : 1; unsigned char targetChannelFlags : 1; unsigned char trafficType : 1; } _has;
}

@property (nonatomic) BOOL hasTrafficType;
@property (nonatomic) unsigned int trafficType;
@property (nonatomic) BOOL hasCompletionTime;
@property (nonatomic) unsigned int completionTime;
@property (nonatomic) BOOL hasAttemptStatus;
@property (nonatomic) unsigned int attemptStatus;
@property (nonatomic) BOOL hasAttemptPeerCount;
@property (nonatomic) unsigned int attemptPeerCount;
@property (nonatomic) BOOL hasBssSyncChannel;
@property (nonatomic) unsigned int bssSyncChannel;
@property (nonatomic) BOOL hasPeerChannel;
@property (nonatomic) unsigned int peerChannel;
@property (nonatomic) BOOL hasSelfInfraChannel;
@property (nonatomic) unsigned int selfInfraChannel;
@property (nonatomic) BOOL hasTargetChannel;
@property (nonatomic) unsigned int targetChannel;
@property (nonatomic) BOOL hasPolicyCode;
@property (nonatomic) unsigned int policyCode;
@property (nonatomic) BOOL hasPeerChannelFlags;
@property (nonatomic) unsigned int peerChannelFlags;
@property (nonatomic) BOOL hasSelfInfraChannelFlags;
@property (nonatomic) unsigned int selfInfraChannelFlags;
@property (nonatomic) BOOL hasBssSyncChannelFlags;
@property (nonatomic) unsigned int bssSyncChannelFlags;
@property (nonatomic) BOOL hasTargetChannelFlags;
@property (nonatomic) unsigned int targetChannelFlags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
