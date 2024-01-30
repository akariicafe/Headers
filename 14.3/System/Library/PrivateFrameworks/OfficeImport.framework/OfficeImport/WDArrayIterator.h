@class NSArray;

@interface WDArrayIterator : WDIterator {
    NSArray *mArray;
    unsigned int mNextIndex;
}

- (id)next;
- (void).cxx_destruct;
- (BOOL)hasNext;
- (id)initWithArray:(id)a0;

@end
