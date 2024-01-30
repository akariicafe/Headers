@interface WBSAnalyticsSafariSharedPasswordEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char initiatedSharePasswordOutcome : 1; unsigned char passwordSharingMechanism : 1; unsigned char receivedSharedPasswordOutcome : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasInitiatedSharePasswordOutcome;
@property (nonatomic) int initiatedSharePasswordOutcome;
@property (nonatomic) BOOL hasReceivedSharedPasswordOutcome;
@property (nonatomic) int receivedSharedPasswordOutcome;
@property (nonatomic) BOOL hasPasswordSharingMechanism;
@property (nonatomic) int passwordSharingMechanism;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initiatedSharePasswordOutcomeAsString:(int)a0;
- (int)StringAsInitiatedSharePasswordOutcome:(id)a0;
- (id)receivedSharedPasswordOutcomeAsString:(int)a0;
- (int)StringAsReceivedSharedPasswordOutcome:(id)a0;
- (id)passwordSharingMechanismAsString:(int)a0;
- (int)StringAsPasswordSharingMechanism:(id)a0;

@end
