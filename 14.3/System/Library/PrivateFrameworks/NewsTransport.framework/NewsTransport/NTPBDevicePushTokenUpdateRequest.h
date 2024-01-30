@class NSString, NTPBDeviceInfo;

@interface NTPBDevicePushTokenUpdateRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasNotificationUserId;
@property (retain, nonatomic) NSString *notificationUserId;
@property (readonly, nonatomic) BOOL hasDeviceInfoToAdd;
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfoToAdd;
@property (readonly, nonatomic) BOOL hasDeviceInfoToRemove;
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfoToRemove;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
