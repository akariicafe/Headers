@class WDIterator;

@interface WDTestIterator : WDIterator {
    WDIterator *mIterator;
    id mNext;
}

- (id)next;
- (void).cxx_destruct;
- (id)initWithIterator:(id)a0;
- (BOOL)test:(id)a0;
- (BOOL)hasNext;

@end
