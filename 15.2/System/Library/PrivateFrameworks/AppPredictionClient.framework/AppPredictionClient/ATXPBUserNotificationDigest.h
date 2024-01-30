@class NSString, ATXPBSharedDigestEngagementTrackingMetrics, NSMutableArray, ATXPBDigestTimeline;

@interface ATXPBUserNotificationDigest : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasRankerId;
@property (retain, nonatomic) NSString *rankerId;
@property (readonly, nonatomic) BOOL hasModeId;
@property (retain, nonatomic) NSString *modeId;
@property (retain, nonatomic) NSMutableArray *messageGroups;
@property (retain, nonatomic) NSMutableArray *highlightedGroups;
@property (retain, nonatomic) NSMutableArray *rankedGroups;
@property (readonly, nonatomic) BOOL hasSharedEngagementTracker;
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;
@property (readonly, nonatomic) BOOL hasDigestTimeline;
@property (retain, nonatomic) ATXPBDigestTimeline *digestTimeline;

+ (Class)rankedGroupsType;
+ (Class)messageGroupsType;
+ (Class)highlightedGroupsType;

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
- (void)addRankedGroups:(id)a0;
- (unsigned long long)rankedGroupsCount;
- (void)clearRankedGroups;
- (id)rankedGroupsAtIndex:(unsigned long long)a0;
- (void)addMessageGroups:(id)a0;
- (void)addHighlightedGroups:(id)a0;
- (unsigned long long)messageGroupsCount;
- (void)clearMessageGroups;
- (id)messageGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)highlightedGroupsCount;
- (void)clearHighlightedGroups;
- (id)highlightedGroupsAtIndex:(unsigned long long)a0;

@end
