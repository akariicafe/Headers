@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject

@property (readonly, nonatomic) PPScoredItem *scoredTopic;
@property (readonly, nonatomic) unsigned short occurrencesInSource;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScoredTopic:(id)a0 occurrencesInSource:(unsigned short)a1;

@end
