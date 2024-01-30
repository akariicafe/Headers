@class NSArray;

@interface WDArrayIterator : WDIterator {
    NSArray *mArray;
    unsigned int mNextIndex;
}

- (id)initWithArray:(id)a0;
- (id)next;
- (BOOL)hasNext;
- (void).cxx_destruct;

@end
