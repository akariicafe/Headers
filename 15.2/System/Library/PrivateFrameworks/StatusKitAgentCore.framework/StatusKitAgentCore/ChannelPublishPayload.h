@class NSData, ChannelIdentity;

@interface ChannelPublishPayload : PBCodable <NSCopying> {
    struct { unsigned char publishInitiateTimestampMillis : 1; unsigned char publishPayloadExpiryTtlMillis : 1; unsigned char pushPriority : 1; unsigned char pendingPublishHint : 1; unsigned char scheduledPublishHint : 1; } _has;
}

@property (nonatomic) BOOL hasPublishInitiateTimestampMillis;
@property (nonatomic) unsigned long long publishInitiateTimestampMillis;
@property (readonly, nonatomic) BOOL hasChannelIdentity;
@property (retain, nonatomic) ChannelIdentity *channelIdentity;
@property (readonly, nonatomic) BOOL hasPublishPayload;
@property (retain, nonatomic) NSData *publishPayload;
@property (nonatomic) BOOL hasPublishPayloadExpiryTtlMillis;
@property (nonatomic) unsigned long long publishPayloadExpiryTtlMillis;
@property (nonatomic) BOOL hasPushPriority;
@property (nonatomic) int pushPriority;
@property (nonatomic) BOOL hasPendingPublishHint;
@property (nonatomic) BOOL pendingPublishHint;
@property (nonatomic) BOOL hasScheduledPublishHint;
@property (nonatomic) BOOL scheduledPublishHint;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)pushPriorityAsString:(int)a0;
- (int)StringAsPushPriority:(id)a0;

@end
