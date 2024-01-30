@protocol FCTagRanking;

@interface FCTagSubscriptionSorter : NSObject

@property (readonly, nonatomic) id<FCTagRanking> tagRanker;

- (void).cxx_destruct;
- (id)initWithTagRanker:(id)a0;
- (id)sortTagSubscriptions:(id)a0;

@end
