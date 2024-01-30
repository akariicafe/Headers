@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject

@property (readonly, nonatomic) PPScoredItem *scoredNamedEntity;
@property (readonly, nonatomic) unsigned short occurrencesInSource;

- (id)init;
- (void).cxx_destruct;
- (id)initWithScoredNamedEntity:(id)a0 occurrencesInSource:(unsigned short)a1;

@end
