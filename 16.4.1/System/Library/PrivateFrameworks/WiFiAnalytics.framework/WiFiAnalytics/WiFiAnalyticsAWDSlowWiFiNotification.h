@interface WiFiAnalyticsAWDSlowWiFiNotification : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char actionField : 1; unsigned char recoveryAction : 1; unsigned char recoveryReason : 1; unsigned char userInput : 1; unsigned char facetimeCallInProgress : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasActionField;
@property (nonatomic) unsigned int actionField;
@property (nonatomic) BOOL hasRecoveryAction;
@property (nonatomic) unsigned int recoveryAction;
@property (nonatomic) BOOL hasRecoveryReason;
@property (nonatomic) unsigned int recoveryReason;
@property (nonatomic) BOOL hasUserInput;
@property (nonatomic) unsigned int userInput;
@property (nonatomic) BOOL hasFacetimeCallInProgress;
@property (nonatomic) BOOL facetimeCallInProgress;

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
