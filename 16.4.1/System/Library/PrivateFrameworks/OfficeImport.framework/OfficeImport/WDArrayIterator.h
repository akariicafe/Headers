@class NSArray;

@interface WDArrayIterator : WDIterator {
    NSArray *mArray;
    unsigned int mNextIndex;
}

- (id)next;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasNext;

@end
