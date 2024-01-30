@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject

@property (readonly, nonatomic) WBSHistoryItem *historyItem;
@property (readonly, nonatomic) float score;

+ (id)titleForHistoryItem:(id)a0;

- (void).cxx_destruct;
- (id)initWithHistoryItem:(id)a0 score:(float)a1;

@end
