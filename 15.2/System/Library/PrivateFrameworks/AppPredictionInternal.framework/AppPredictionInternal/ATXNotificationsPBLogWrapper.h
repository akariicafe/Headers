@class ATXNotificationsPBPeriodicLog, ATXNotificationsPBSettingLog, ATXNotificationsPBResponse, ATXNotificationsPBGradedRecord, ATXNotificationsPBRecord;

@interface ATXNotificationsPBLogWrapper : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecord;
@property (retain, nonatomic) ATXNotificationsPBRecord *record;
@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) ATXNotificationsPBResponse *response;
@property (readonly, nonatomic) BOOL hasGrecord;
@property (retain, nonatomic) ATXNotificationsPBGradedRecord *grecord;
@property (readonly, nonatomic) BOOL hasPeriodiclog;
@property (retain, nonatomic) ATXNotificationsPBPeriodicLog *periodiclog;
@property (readonly, nonatomic) BOOL hasSettinglog;
@property (retain, nonatomic) ATXNotificationsPBSettingLog *settinglog;

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

@end
