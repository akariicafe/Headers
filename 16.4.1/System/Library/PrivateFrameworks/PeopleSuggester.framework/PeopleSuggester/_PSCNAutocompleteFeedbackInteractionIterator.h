@class NSSet, _CDInteractionStore, _CDInteraction, NSDate, NSArray;

@interface _PSCNAutocompleteFeedbackInteractionIterator : NSEnumerator {
    _CDInteractionStore *_interactionStore;
    NSSet *_bundleIds;
    unsigned long long _batchSize;
    NSDate *_startDate;
    NSDate *_endDate;
    _CDInteraction *_lastItem;
    NSArray *_results;
    long long _resultsIndex;
    long long _resultsBatch;
    BOOL _isExhausted;
}

- (id)nextObject;
- (void)fetchResults;
- (void).cxx_destruct;
- (id)fastForwardToDate:(id)a0;
- (id)initWithInteractionStore:(id)a0 bundleIds:(id)a1 startDate:(id)a2 batchSize:(unsigned long long)a3;

@end
