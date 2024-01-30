@class NSMutableArray;

@interface NTPBNotificationEntity : PBCodable <NSCopying> {
    struct { unsigned char notificationType : 1; unsigned char paidBundleSubscriptionStatus : 1; unsigned char subscriberType : 1; } _has;
}

@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) int notificationType;
@property (retain, nonatomic) NSMutableArray *tagIds;
@property (nonatomic) BOOL hasSubscriberType;
@property (nonatomic) int subscriberType;
@property (nonatomic) BOOL hasPaidBundleSubscriptionStatus;
@property (nonatomic) int paidBundleSubscriptionStatus;

+ (Class)tagIdType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTagId:(id)a0;
- (void)clearTagIds;
- (unsigned long long)tagIdsCount;
- (id)tagIdAtIndex:(unsigned long long)a0;

@end
