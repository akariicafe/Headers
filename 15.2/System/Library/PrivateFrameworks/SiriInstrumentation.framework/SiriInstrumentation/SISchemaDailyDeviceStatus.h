@class SISchemaAggregatedMetrics, NSString, NSArray, SISchemaMultiUserState, SISchemaMultiUserSetup, SISchemaActiveStatus, NSData, SISchemaPersonalization, SISchemaEnabledStatus;

@interface SISchemaDailyDeviceStatus : SISchemaTopLevelUnionType {
    struct { unsigned char clientDeviceSamplingTimestampMs : 1; unsigned char assistantRecordPublishTimestampMs : 1; unsigned char spokenNotificationsproxCardSeen : 1; unsigned char spokenNotificationsControlCenterModuleEnabled : 1; unsigned char spokenNotificationsWhitelistSettings : 1; unsigned char siriInputLocale : 1; unsigned char queuedAtTimestampHourInMs : 1; unsigned char storeCountryCode : 1; } _has;
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
@property (copy, nonatomic) NSArray *linkedAccessoryStates;
@property (nonatomic) int siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (retain, nonatomic) SISchemaMultiUserSetup *multiUserSetup;
@property (nonatomic) BOOL hasMultiUserSetup;
@property (nonatomic) unsigned long long queuedAtTimestampHourInMs;
@property (nonatomic) BOOL hasQueuedAtTimestampHourInMs;
@property (nonatomic) int storeCountryCode;
@property (nonatomic) BOOL hasStoreCountryCode;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addLinkedAccessoryState:(id)a0;
- (void)clearLinkedAccessoryState;
- (unsigned long long)linkedAccessoryStateCount;
- (id)linkedAccessoryStateAtIndex:(unsigned long long)a0;

@end
