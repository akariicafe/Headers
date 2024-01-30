@interface AWDWiFiNWActivityPerACTxCompletions : PBCodable <NSCopying> {
    struct { unsigned char ac : 1; unsigned char dpsNotifications : 1; unsigned char durSinceLastEnqueue : 1; unsigned char durSinceLastEnqueueAtLastCheck : 1; unsigned char durSinceLastFailedComp : 1; unsigned char durSinceLastSuccessfulComp : 1; unsigned char expiredComp : 1; unsigned char failedComp : 1; unsigned char failedCompletionsAtLastCheck : 1; unsigned char noAckComp : 1; unsigned char otherErrComp : 1; unsigned char qeuedPackets : 1; unsigned char sinceLastEnqueueHowManyFailed : 1; unsigned char sinceLastEnqueueHowManySuccess : 1; unsigned char sinceLastSuccessHowManyFailed : 1; unsigned char success : 1; unsigned char successfulCompletionsAtLastCheck : 1; } _has;
}

@property (nonatomic) BOOL hasAc;
@property (nonatomic) int ac;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) unsigned int success;
@property (nonatomic) BOOL hasDurSinceLastSuccessfulComp;
@property (nonatomic) unsigned int durSinceLastSuccessfulComp;
@property (nonatomic) BOOL hasFailedComp;
@property (nonatomic) unsigned int failedComp;
@property (nonatomic) BOOL hasDurSinceLastFailedComp;
@property (nonatomic) unsigned int durSinceLastFailedComp;
@property (nonatomic) BOOL hasExpiredComp;
@property (nonatomic) unsigned int expiredComp;
@property (nonatomic) BOOL hasNoAckComp;
@property (nonatomic) unsigned int noAckComp;
@property (nonatomic) BOOL hasOtherErrComp;
@property (nonatomic) unsigned int otherErrComp;
@property (nonatomic) BOOL hasDurSinceLastEnqueue;
@property (nonatomic) unsigned int durSinceLastEnqueue;
@property (nonatomic) BOOL hasQeuedPackets;
@property (nonatomic) unsigned int qeuedPackets;
@property (nonatomic) BOOL hasSinceLastEnqueueHowManyFailed;
@property (nonatomic) unsigned int sinceLastEnqueueHowManyFailed;
@property (nonatomic) BOOL hasSinceLastEnqueueHowManySuccess;
@property (nonatomic) unsigned int sinceLastEnqueueHowManySuccess;
@property (nonatomic) BOOL hasSinceLastSuccessHowManyFailed;
@property (nonatomic) unsigned int sinceLastSuccessHowManyFailed;
@property (nonatomic) BOOL hasDurSinceLastEnqueueAtLastCheck;
@property (nonatomic) unsigned int durSinceLastEnqueueAtLastCheck;
@property (nonatomic) BOOL hasSuccessfulCompletionsAtLastCheck;
@property (nonatomic) unsigned int successfulCompletionsAtLastCheck;
@property (nonatomic) BOOL hasFailedCompletionsAtLastCheck;
@property (nonatomic) unsigned int failedCompletionsAtLastCheck;
@property (nonatomic) BOOL hasDpsNotifications;
@property (nonatomic) unsigned int dpsNotifications;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsAc:(id)a0;
- (id)acAsString:(int)a0;

@end
