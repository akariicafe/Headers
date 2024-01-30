@class NSUUID, NSArray, ATXSharedDigestEngagementTrackingMetrics, ATXDigestTimeline, NSString, ATXUserNotificationDigestBiomeStream;

@interface ATXUserNotificationDigest : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSArray *messageGroups;
@property (readonly, nonatomic) NSArray *highlightedGroups;
@property (readonly, nonatomic) NSArray *rankedGroups;
@property (copy, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (copy, nonatomic) ATXDigestTimeline *digestTimeline;
@property (copy, nonatomic) NSString *rankerId;
@property (readonly, nonatomic) NSString *modeIdString;
@property (retain, nonatomic) ATXUserNotificationDigestBiomeStream *loggingStream;
@property (readonly, nonatomic) BOOL hasLoggedUpcoming;
@property (readonly, nonatomic) BOOL hasLoggedCollapsed;
@property (readonly, nonatomic) BOOL hasLoggedScheduled;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)initWithNotifications:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithGroups:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithNotifications:(id)a0 modeId:(id)a1;
- (id)allNotificationIds;
- (id)initWithNotificationArrays:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (void)logCollapsedPreview;
- (void)logScheduledViewWithTimestamp:(double)a0;
- (void)logCollapsedPreviewWithTimestamp:(double)a0;
- (id)initWithMessageGroups:(id)a0 highlightedGroups:(id)a1 otherGroups:(id)a2 rankerId:(id)a3;
- (BOOL)doesDigestShareContentWithOtherDigest:(id)a0;
- (id)viewFlattenedGroups;
- (void)logScheduledView;
- (void)logUpcomingView;
- (void)logUpcomingViewWithTimestamp:(double)a0;

@end
