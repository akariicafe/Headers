@class GKLeaderboardSummaryInternal;

@interface GKLeaderboardSummary : NSObject

@property (retain, nonatomic) GKLeaderboardSummaryInternal *internal;
@property (nonatomic) unsigned long long scoreValue;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) unsigned long long totalEntries;
@property (nonatomic) unsigned long long friendRank;
@property (nonatomic) unsigned long long totalFriendEntries;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;

@end
