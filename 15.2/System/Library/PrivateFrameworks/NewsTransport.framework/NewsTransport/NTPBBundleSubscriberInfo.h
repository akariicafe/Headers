@class NSString, NSMutableArray;

@interface NTPBBundleSubscriberInfo : PBCodable <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char bundleSubscriptionStatus : 1; unsigned char isAmplifyUser : 1; unsigned char isBundlePurchaser : 1; unsigned char isStoreDemoModeEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasBundleSubscriptionStatus;
@property (nonatomic) int bundleSubscriptionStatus;
@property (retain, nonatomic) NSMutableArray *subscribedChannelIds;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) BOOL hasIsStoreDemoModeEnabled;
@property (nonatomic) BOOL isStoreDemoModeEnabled;
@property (nonatomic) BOOL hasIsBundlePurchaser;
@property (nonatomic) BOOL isBundlePurchaser;
@property (nonatomic) BOOL hasIsAmplifyUser;
@property (nonatomic) BOOL isAmplifyUser;

+ (Class)subscribedChannelIdsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addSubscribedChannelIds:(id)a0;
- (id)bundleSubscriptionStatusAsString:(int)a0;
- (int)StringAsBundleSubscriptionStatus:(id)a0;
- (void)clearSubscribedChannelIds;
- (unsigned long long)subscribedChannelIdsCount;
- (id)subscribedChannelIdsAtIndex:(unsigned long long)a0;

@end
