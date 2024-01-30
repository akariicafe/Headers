@class NSData, ChannelIdentity;

@interface ChannelPublishPayload : PBCodable <NSCopying> {
    struct { unsigned char publishInitiateTimestampMillis : 1; unsigned char publishPayloadExpiryTtlMillis : 1; unsigned char pushPriority : 1; unsigned char retryCount : 1; unsigned char pendingPublishHint : 1; unsigned char scheduledPublishHint : 1; } _has;
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
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) unsigned int retryCount;

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
- (int)StringAsPushPriority:(id)a0;
- (id)pushPriorityAsString:(int)a0;

@end
