@class NSString, NSArray, ATXNotificationDigestRankingConstants, NSMutableArray;
@protocol ATXNotificationDigestFeedbackProtocol;

@interface ATXNotificationDigestApp : NSObject {
    id<ATXNotificationDigestFeedbackProtocol> _digestFeedback;
    ATXNotificationDigestRankingConstants *_c;
    NSMutableArray *_rawGroups;
    NSArray *_orderedGroups;
}

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL isEligibleForAutomaticMarquee;
@property (readonly, nonatomic) double appScore;
@property (readonly, nonatomic) NSArray *orderedGroups;
@property (readonly, nonatomic) NSArray *unorderedGroups;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL hasBeenChosenForMarquee;

- (void).cxx_destruct;
- (void)addGroup:(id)a0;
- (id)initWithBundleId:(id)a0 digestFeedback:(id)a1 digestConstants:(id)a2;
- (double)logisticScoreForInput:(double)a0;
- (void)populateScoresFromBundleId;
- (void)refreshGroupOrder;

@end
