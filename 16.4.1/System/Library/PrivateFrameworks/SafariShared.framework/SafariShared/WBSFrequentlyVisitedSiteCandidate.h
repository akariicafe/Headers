@class NSString;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject

@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) float score;

- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 title:(id)a1 score:(float)a2;

@end
