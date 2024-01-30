@class NTPBIssueViewData, NSString, NTPBIssueData, NSData, NTPBChannelData;

@interface NTPBAudioEngagementCompleted : PBCodable <NSCopying> {
    struct { unsigned char timePlayed : 1; unsigned char trackDuration : 1; unsigned char feedType : 1; unsigned char groupType : 1; unsigned char playbackSpeed : 1; unsigned char trackVariant : 1; unsigned char adSupportedChannel : 1; unsigned char isPaidSubscriberToSourceChannel : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL adSupportedChannel;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) BOOL hasTrackDuration;
@property (nonatomic) long long trackDuration;
@property (nonatomic) BOOL hasTrackVariant;
@property (nonatomic) int trackVariant;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) BOOL hasTimePlayed;
@property (nonatomic) long long timePlayed;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (retain, nonatomic) NTPBChannelData *channelData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL hasPlaybackSpeed;
@property (nonatomic) float playbackSpeed;
@property (readonly, nonatomic) BOOL hasEngagementId;
@property (retain, nonatomic) NSString *engagementId;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel;

- (int)StringAsGroupType:(id)a0;
- (id)groupTypeAsString:(int)a0;
- (int)StringAsFeedType:(id)a0;
- (void).cxx_destruct;
- (id)trackVariantAsString:(int)a0;
- (int)StringAsTrackVariant:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)feedTypeAsString:(int)a0;

@end
