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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
