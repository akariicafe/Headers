@class NSArray, NSUUID, NSString, ATXSharedDigestEngagementTrackingMetrics, ATXDigestTimeline, ATXMissedNotificationRankingBiomeStream;

@interface ATXMissedNotificationRanking : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic) NSArray *rankedGroups;
@property (readonly, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *rankerId;
@property (copy, nonatomic) NSString *modeIdString;
@property (copy, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (copy, nonatomic) ATXDigestTimeline *digestTimeline;
@property (retain, nonatomic) ATXMissedNotificationRankingBiomeStream *loggingStream;
@property (nonatomic) BOOL hasLoggedCollapsed;
@property (nonatomic) BOOL hasLoggedExpanded;
@property (nonatomic) BOOL hasLoggedUpcomingExpanded;
@property (nonatomic) BOOL hasLoggedDeliveredExpanded;
@property (nonatomic) BOOL hasLoggedUpcomingCollapsed;
@property (nonatomic) BOOL hasLoggedDeliveredCollapsed;
@property (nonatomic) BOOL hasLoggedRemoval;
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
- (void)logView;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)initWithNotifications:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithGroups:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithNotifications:(id)a0 modeId:(id)a1;
- (id)allNotificationIds;
- (id)initWithNotificationArrays:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (BOOL)doesRankingShareContentWithOtherRanking:(id)a0;
- (void)logCollapsedPreview;
- (void)logExpandedViewWithIsUpcoming:(BOOL)a0;
- (void)logCollapsedViewWithIsUpcoming:(BOOL)a0;
- (void)logRemoval;

@end
