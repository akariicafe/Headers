@class WDIterator;

@interface WDCombinedIterator : WDIterator {
    WDIterator *mParentIterator;
}

@property (retain, nonatomic) WDIterator *childIterator;

- (id)next;
- (BOOL)hasNext;
- (void).cxx_destruct;
- (id)initWithParentIterator:(id)a0;
- (id)childIteratorFrom:(id)a0;
- (id)newChildIteratorFrom:(id)a0;
- (void)incrementChildIterator;

@end
