@class WDIterator;

@interface WDTestIterator : WDIterator {
    WDIterator *mIterator;
    id mNext;
}

- (id)initWithIterator:(id)a0;
- (id)next;
- (BOOL)test:(id)a0;
- (BOOL)hasNext;
- (void).cxx_destruct;

@end
