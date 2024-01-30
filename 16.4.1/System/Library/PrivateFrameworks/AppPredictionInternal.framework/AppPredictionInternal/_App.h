@class NSString, NSArray, ATXNotificationDigestRankingConstants;
@protocol ATXNotificationDigestFeedbackProtocol;

@interface _App : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> _digestFeedback;
    ATXNotificationDigestRankingConstants *_c;
    unsigned long long _maxAppMarqueeGroups;
}

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) double digestRankingScore;
@property (readonly, nonatomic) NSArray *appMarqueeGroups;
@property (readonly, nonatomic) NSArray *nonAppMarqueeGroups;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) NSArray *groupsWithComms;
@property (readonly, nonatomic) NSArray *groupsWithoutComms;
@property (readonly, nonatomic) NSArray *groupsWithCommsWithPreviewableAttachment;
@property (readonly, nonatomic) NSArray *groupsWithCommsWithoutPreviewableAttachment;
@property (readonly, nonatomic) NSArray *groupsWithoutCommsWithPreviewableAttachment;
@property (readonly, nonatomic) NSArray *groupsWithoutCommsWithoutPreviewableAttachment;

- (void).cxx_destruct;
- (id)getGroupsFromNotificationStacks:(id)a0;
- (id)initWithNotificationStacks:(id)a0 maxAppMarqueeGroups:(unsigned long long)a1 digestFeedback:(id)a2;
- (double)logisticScoreForInput:(double)a0;
- (void)setBundleId;
- (double)setDigestRankingScore;
- (void)setRankedGroupsFromNotificationGroups:(id)a0;

@end
