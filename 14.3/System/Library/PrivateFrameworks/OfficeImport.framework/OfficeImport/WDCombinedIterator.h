@class WDIterator;

@interface WDCombinedIterator : WDIterator {
    WDIterator *mParentIterator;
}

@property (retain, nonatomic) WDIterator *childIterator;

- (id)next;
- (void).cxx_destruct;
- (BOOL)hasNext;
- (id)initWithParentIterator:(id)a0;
- (id)childIteratorFrom:(id)a0;
- (id)newChildIteratorFrom:(id)a0;
- (void)incrementChildIterator;

@end
