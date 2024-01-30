@class NSString, NTPBDeviceInfo, NSMutableArray;

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasNotificationUserId;
@property (retain, nonatomic) NSString *notificationUserId;
@property (readonly, nonatomic) BOOL hasDeviceInfo;
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSMutableArray *notificationEntitys;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;

+ (Class)notificationEntityType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)notificationEntityAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)notificationEntitysCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addNotificationEntity:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearNotificationEntitys;

@end
