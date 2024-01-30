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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addNotificationEntity:(id)a0;
- (void)clearNotificationEntitys;
- (unsigned long long)notificationEntitysCount;
- (id)notificationEntityAtIndex:(unsigned long long)a0;

@end
