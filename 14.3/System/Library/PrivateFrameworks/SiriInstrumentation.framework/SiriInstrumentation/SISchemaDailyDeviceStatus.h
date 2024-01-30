@class SISchemaActiveStatus, NSString, SISchemaPersonalization, NSData, SISchemaMultiUserState, SISchemaAggregatedMetrics, SISchemaEnabledStatus;

@interface SISchemaDailyDeviceStatus : PBCodable {
    struct { unsigned char clientDeviceSamplingTimestampMs : 1; unsigned char assistantRecordPublishTimestampMs : 1; unsigned char spokenNotificationsproxCardSeen : 1; unsigned char spokenNotificationsControlCenterModuleEnabled : 1; unsigned char spokenNotificationsWhitelistSettings : 1; } _has;
}

@property (copy, nonatomic) NSString *siriDeviceID;
@property (nonatomic) BOOL hasSiriDeviceID;
@property (copy, nonatomic) NSString *siriSpeechID;
@property (nonatomic) BOOL hasSiriSpeechID;
@property (copy, nonatomic) NSString *sharedUserId;
@property (nonatomic) BOOL hasSharedUserId;
@property (nonatomic) long long clientDeviceSamplingTimestampMs;
@property (nonatomic) BOOL hasClientDeviceSamplingTimestampMs;
@property (nonatomic) long long assistantRecordPublishTimestampMs;
@property (nonatomic) BOOL hasAssistantRecordPublishTimestampMs;
@property (copy, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasLocale;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *deviceOs;
@property (nonatomic) BOOL hasDeviceOs;
@property (copy, nonatomic) NSString *deviceBuild;
@property (nonatomic) BOOL hasDeviceBuild;
@property (retain, nonatomic) SISchemaEnabledStatus *enabledStatus;
@property (nonatomic) BOOL hasEnabledStatus;
@property (retain, nonatomic) SISchemaActiveStatus *activeStatus;
@property (nonatomic) BOOL hasActiveStatus;
@property (retain, nonatomic) SISchemaPersonalization *personalization;
@property (nonatomic) BOOL hasPersonalization;
@property (retain, nonatomic) SISchemaMultiUserState *multiUserState;
@property (nonatomic) BOOL hasMultiUserState;
@property (nonatomic) BOOL spokenNotificationsproxCardSeen;
@property (nonatomic) BOOL hasSpokenNotificationsproxCardSeen;
@property (nonatomic) BOOL spokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) BOOL hasSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) int spokenNotificationsWhitelistSettings;
@property (nonatomic) BOOL hasSpokenNotificationsWhitelistSettings;
@property (retain, nonatomic) SISchemaAggregatedMetrics *aggregatedMetrics;
@property (nonatomic) BOOL hasAggregatedMetrics;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (int)getAnyEventType;
- (id)getTypeId;

@end
