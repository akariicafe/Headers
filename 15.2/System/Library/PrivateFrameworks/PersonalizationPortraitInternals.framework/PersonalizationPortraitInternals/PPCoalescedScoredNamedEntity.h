@class PPScoredItem;

@interface PPCoalescedScoredNamedEntity : NSObject {
    unsigned short _occurrencesInSource;
    PPScoredItem *_scoredNamedEntity;
}

- (void).cxx_destruct;
- (id)init;

@end
