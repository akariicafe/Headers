@class NSString, NSMutableArray, ATXPBSharedDigestEngagementTrackingMetrics;

@interface ATXPBUserNotificationDigestNotificationGroup : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char priority : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasGroupDescription;
@property (retain, nonatomic) NSString *groupDescription;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) double priority;
@property (readonly, nonatomic) BOOL hasRepresentativeNotificationUUID;
@property (retain, nonatomic) NSString *representativeNotificationUUID;
@property (retain, nonatomic) NSMutableArray *rankedNotifications;
@property (readonly, nonatomic) BOOL hasSharedEngagementTracker;
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;

+ (Class)rankedNotificationsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addRankedNotifications:(id)a0;
- (unsigned long long)rankedNotificationsCount;
- (void)clearRankedNotifications;
- (id)rankedNotificationsAtIndex:(unsigned long long)a0;

@end
