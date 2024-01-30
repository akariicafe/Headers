@class PPScoredItem;

@interface PPCoalescedScoredTopic : NSObject

@property (readonly, nonatomic) PPScoredItem *scoredTopic;
@property (readonly, nonatomic) unsigned short occurrencesInSource;

- (id)init;
- (void).cxx_destruct;
- (id)initWithScoredTopic:(id)a0 occurrencesInSource:(unsigned short)a1;

@end
