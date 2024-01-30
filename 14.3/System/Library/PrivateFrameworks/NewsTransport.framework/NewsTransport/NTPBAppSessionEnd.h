@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying> {
    struct { unsigned char appSessionDuration : 1; unsigned char appsAutoSubscribeFeedCount : 1; unsigned char channelSubscriptionCount : 1; unsigned char internalAutoSubscribeFeedCount : 1; unsigned char notificationEnabledChannelsCount : 1; unsigned char notitificationsEnabledChannelsCount : 1; unsigned char portraitAutoSubscribeFeedCount : 1; unsigned char safariAutoSubscribeFeedCount : 1; unsigned char sessionEndReason : 1; unsigned char topicSubscriptionCount : 1; unsigned char breakingNewsAvailableDuringSession : 1; unsigned char breakingNewsDismissedDuringSession : 1; unsigned char syncedOtherUserIdDuringSession : 1; } _has;
}

@property (nonatomic) BOOL hasSessionEndReason;
@property (nonatomic) int sessionEndReason;
@property (retain, nonatomic) NSMutableArray *lastVisibleViews;
@property (nonatomic) BOOL hasChannelSubscriptionCount;
@property (nonatomic) int channelSubscriptionCount;
@property (nonatomic) BOOL hasTopicSubscriptionCount;
@property (nonatomic) int topicSubscriptionCount;
@property (nonatomic) BOOL hasAppSessionDuration;
@property (nonatomic) long long appSessionDuration;
@property (retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds;
@property (nonatomic) BOOL hasNotitificationsEnabledChannelsCount;
@property (nonatomic) int notitificationsEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *notificationChannelIds;
@property (nonatomic) BOOL hasNotificationEnabledChannelsCount;
@property (nonatomic) int notificationEnabledChannelsCount;
@property (retain, nonatomic) NSMutableArray *subscribedFeedIds;
@property (nonatomic) BOOL hasBreakingNewsAvailableDuringSession;
@property (nonatomic) BOOL breakingNewsAvailableDuringSession;
@property (nonatomic) BOOL hasBreakingNewsDismissedDuringSession;
@property (nonatomic) BOOL breakingNewsDismissedDuringSession;
@property (retain, nonatomic) NSMutableArray *autoSubscribedFeedIds;
@property (retain, nonatomic) NSMutableArray *groupableFeedIds;
@property (nonatomic) BOOL hasPortraitAutoSubscribeFeedCount;
@property (nonatomic) int portraitAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSafariAutoSubscribeFeedCount;
@property (nonatomic) int safariAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasAppsAutoSubscribeFeedCount;
@property (nonatomic) int appsAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasInternalAutoSubscribeFeedCount;
@property (nonatomic) int internalAutoSubscribeFeedCount;
@property (nonatomic) BOOL hasSyncedOtherUserIdDuringSession;
@property (nonatomic) BOOL syncedOtherUserIdDuringSession;

+ (Class)paidSubscriptionChannelIdsType;
+ (Class)notificationChannelIdsType;
+ (Class)subscribedFeedIdsType;
+ (Class)groupableFeedIdsType;
+ (Class)lastVisibleViewsType;
+ (Class)autoSubscribedFeedIdsType;

- (id)notificationChannelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (void)clearGroupableFeedIds;
- (void)addAutoSubscribedFeedIds:(id)a0;
- (void)addGroupableFeedIds:(id)a0;
- (unsigned long long)subscribedFeedIdsCount;
- (id)groupableFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)notificationChannelIdsCount;
- (void)addSubscribedFeedIds:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)lastVisibleViewsAtIndex:(unsigned long long)a0;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)a0;
- (id)sessionEndReasonAsString:(int)a0;
- (void)clearLastVisibleViews;
- (BOOL)readFrom:(id)a0;
- (void)clearAutoSubscribedFeedIds;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)groupableFeedIdsCount;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addLastVisibleViews:(id)a0;
- (void)addNotificationChannelIds:(id)a0;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)a0;
- (void)addPaidSubscriptionChannelIds:(id)a0;
- (unsigned long long)lastVisibleViewsCount;
- (void)clearPaidSubscriptionChannelIds;
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)autoSubscribedFeedIdsCount;
- (int)StringAsSessionEndReason:(id)a0;
- (void)clearNotificationChannelIds;
- (void)clearSubscribedFeedIds;

@end
