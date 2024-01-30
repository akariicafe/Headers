@class ATXPBSendToDigestSuggestion, ATXPBNotificationQuietingSuggestion, NSString, ATXPBNotificationPromotingSuggestion, ATXPBUrgencyTuningSuggestion, ATXPBSendMessagesToDigestSuggestion, ATXPBInterruptionManagerTuningSuggestion, ATXPBNotificationSmartPauseSuggestion;

@interface ATXPBNotificationDeliverySuggestion : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char oneofNotificationDeliverySuggestion : 1; unsigned char scope : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSmartPause;
@property (retain, nonatomic) ATXPBNotificationSmartPauseSuggestion *smartPause;
@property (readonly, nonatomic) BOOL hasQuieting;
@property (retain, nonatomic) ATXPBNotificationQuietingSuggestion *quieting;
@property (readonly, nonatomic) BOOL hasPromoting;
@property (retain, nonatomic) ATXPBNotificationPromotingSuggestion *promoting;
@property (readonly, nonatomic) BOOL hasInterruptionManagerTuning;
@property (retain, nonatomic) ATXPBInterruptionManagerTuningSuggestion *interruptionManagerTuning;
@property (readonly, nonatomic) BOOL hasSendToDigest;
@property (retain, nonatomic) ATXPBSendToDigestSuggestion *sendToDigest;
@property (readonly, nonatomic) BOOL hasUrgencyTuning;
@property (retain, nonatomic) ATXPBUrgencyTuningSuggestion *urgencyTuning;
@property (readonly, nonatomic) BOOL hasSendMessagesToDigest;
@property (retain, nonatomic) ATXPBSendMessagesToDigestSuggestion *sendMessagesToDigest;
@property (nonatomic) BOOL hasOneofNotificationDeliverySuggestion;
@property (nonatomic) int oneofNotificationDeliverySuggestion;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasScope;
@property (nonatomic) int scope;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (retain, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) BOOL hasTriggerNotificationUUID;
@property (retain, nonatomic) NSString *triggerNotificationUUID;

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
- (void)clearOneofValuesForOneofNotificationDeliverySuggestion;
- (id)oneofNotificationDeliverySuggestionAsString:(int)a0;
- (int)StringAsOneofNotificationDeliverySuggestion:(id)a0;

@end
