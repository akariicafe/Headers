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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
